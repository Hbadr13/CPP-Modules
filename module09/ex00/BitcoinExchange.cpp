#include "BitcoinExchange.hpp"

int to_int(std::string str)
{
    std::stringstream ss;
    int number;
    // ss.write(str.c_str(),str.size());
    ss << str;
    ss >> number;
    return number;
}
int is_int(std::string str)
{
    size_t i = 0;

    while (i < str.size())
    {
        if (!isdigit(str[i]))
            return true;
        i++;
    }
    return false;
}
int is_float(std::string str)
{
    size_t i = 0;
    int flag = 0;

    while (i < str.size())
    {
        if (str[i] == '.' && flag == 0)
            flag = 1;
        else if ((i == 0) && (str[i] == '-' || str[i] == '+'))
            ;
        else if (!isdigit(str[i]))
            return true;
        i++;
    }
    return false;
}
int number_of_daysin_month(int month, int year)
{
    switch (month)
    {
    case 1:
        return 31;
    case 2:
    {
        if (year % 4 == 0)
            return 29;
        else
            return 28;
    }
    case 3:
        return 31;
    case 4:
        return 30;
    case 5:
        return 31;
    case 6:
        return 30;
    case 7:
        return 31;
    case 8:
        return 31;
    case 9:
        return 30;
    case 10:
        return 31;
    case 11:
        return 30;
    case 12:
        return 31;
    }
    return 0;
    exit(12);
}

int check_formatofDate(std::string year, std::string month, std::string day, std::string value)
{
    if (year.empty() || month.empty() || day.empty() || value.empty())
        return true;
    if (is_int(year) || is_int(day) || is_int(month) || is_float(value))
        return true;
    if (std::stod(year) > MAX_INT || std::stod(day) > MAX_INT || std::stod(month) > MAX_INT || std::stod(month) > 12)
        return true;
    if (std::stoi(year) < 1 || std::stoi(day) < 1 || std::stoi(month) < 1 || std::stoi(month) > 12)
        return true;
    if (std::stoi(day) > number_of_daysin_month(std::stoi(month), std::stoi(year)))
        return true;
    return false;
}
//---------- BitcoinExchange ----------//

int BitcoinExchange::read_and_parsFILE_SCV(std::string path)
{
    std::ifstream file(path);
    std::string lines;
    if (!file.is_open())
        throw std::string("FILE NOT EXESTE1.");
    std::string line;
    int i = 0;
    std::string year;
    std::string month;
    std::string day;
    std::string prix;
    std::string copy;
    while (std::getline(file, line))
    {
        copy = line;
        year = "";
        month = "";
        day = "";
        prix = "";
        if (i == MAX_DATA)
            throw std::string("FILE TO LARGE.");
        if (i == 0)
        {
            if (line.compare("date,exchange_rate"))
                throw std::string("FERST LINE.");
            i++;
            continue;
        }
        if (line.find("-") != std::string::npos)
        {
            year = line.substr(0, line.find("-"));
            line = line.substr(line.find("-") + 1, line.length());
        }
        if (line.find("-") != std::string::npos)
        {
            month = line.substr(0, line.find("-"));
            line = line.substr(line.find("-") + 1, line.length());
        }
        if (line.find(",") != std::string::npos)
        {
            day = line.substr(0, line.find(","));
            prix = line.substr(line.find(",") + strlen(","), line.length());
        }
        if (check_formatofDate(year, month, day, prix))
            throw std::string("Error: bad input             =>" + copy);
        else if (std::stof(prix) < 0)
            throw std::string("Error: not a positive prix   =>" + copy);
        else if (std::stod(prix) > MAX_INT)
            throw std::string("Error: too large a prix      =>" + copy);
        Bitcoin bitc(year, month, day, prix);
        if (_mapscv.count(bitc.getFormat()))
            throw std::string("Error: Duplicate date        =>" + copy);
        _mapscv.insert(std::make_pair(bitc.getFormat(), bitc));
        i++;
    }
    return 0;
}

int BitcoinExchange::initialization(std::string path)
{
    int i;
    std::string day;
    std::string year;
    std::string line;
    std::string value;
    std::string month;
    std::string lines;
    std::ifstream file(path);
    std::string copy;
    if (!file.is_open())
        throw std::string("FILE NOT EXESTE.");
    i = 0;
    while (std::getline(file, line))
    {
        copy = line;
        day = "";
        year = "";
        month = "";
        value = "";

        if (i == MAX_DATA)
            throw std::string("FILE TO LARGE.");
        if (i == 0)
        {
            if (line.compare("date | value"))
                throw std::string("FERST LINE.");
            i++;
            continue;
        }
        if (line.empty())
            continue;
        if (line.find("-") != std::string::npos)
        {
            year = line.substr(0, line.find("-"));
            line = line.substr(line.find("-") + 1, line.length());
        }
        if (line.find("-") != std::string::npos)
        {
            month = line.substr(0, line.find("-"));
            line = line.substr(line.find("-") + 1, line.length());
        }
        if (line.find(" | ") != std::string::npos)
        {
            day = line.substr(0, line.find(" | "));
            value = line.substr(line.find(" | ") + strlen(" | "), line.length());
        }
        else
            day = line;
        // std::cout << year << "|" << month << "|" << day << "|" << value << std::endl;
        if (check_formatofDate(year, month, day, value))
            std::cout << "Error: bad input              =>" + copy << std::endl;
        else if (std::stof(value) < 0)
            std::cout << "Error: not a positive number  =>" + copy << std::endl;
        else if (std::stod(value) > MAX_INT)
            std::cout << "Error: too large a number     =>" + copy << std::endl;
        else
        {
            Bitcoin bitc(year, month, day, std::stof(value));
            if (this->findBitcoin(bitc) == -1)
                std::cout << "Error: There is no Bitcoin" << std::endl;
            else
                std::cout << bitc.getFormat() << " => " << value << " = " << this->findBitcoin(bitc) * bitc.getValue() << std::endl;
        }
        i++;
    }
    return 0;
}

float BitcoinExchange::findBitcoin(Bitcoin &bitc)
{
    std::map<std::string, Bitcoin>::iterator it = _mapscv.find(bitc.getFormat());
    int flag = 1;
    if (it != _mapscv.end())
        return it->second.getPrix();
    Bitcoin copy;
    it = _mapscv.begin();
    copy = it->second;
    while (it != _mapscv.end())
    {
        // if (!(it->second > bitc) && it->second > copy)
        if (it->second < bitc && it->second > copy)
        {
            flag = 0;
            copy = it->second;
        }
        it++;
    }
    if (flag)
        return -1;
    return copy.getPrix();
}
BitcoinExchange::BitcoinExchange()
{
}
BitcoinExchange::BitcoinExchange(std::string path)
{
    read_and_parsFILE_SCV(path);
}
BitcoinExchange::~BitcoinExchange()
{
}

std::map<std::string, Bitcoin> &BitcoinExchange::getMap()
{
    return _mapscv;
}

void BitcoinExchange::setMap(std::map<std::string, Bitcoin> &mp)
{
    _mapscv = mp;
}

//---------- Bitcoin ----------//

Bitcoin::Bitcoin()
{
    _year = 0;
    _month = 0;
    _day = 0;
    _prix = 0;
    _format = "";
}
Bitcoin::Bitcoin(std::string year, std::string month, std::string day, std::string prix)
{
    _year = std::stoi(year);
    _month = std::stoi(month);
    _day = std::stoi(day);
    _prix = std::stof(prix.c_str());
    if (month.size() < 2)
        month = "0" + month;
    if (day.size() < 2)
        day = "0" + day;
    _format = year + "-" + month + "-" + day;
}

Bitcoin::Bitcoin(std::string year, std::string month, std::string day, float value)
{
    _year = std::stoi(year);
    _month = std::stoi(month);
    _day = std::stoi(day);
    _value = value;
    if (month.size() < 2)
        month = "0" + month;
    if (day.size() < 2)
        day = "0" + day;
    _format = year + "-" + month + "-" + day;
}

Bitcoin::~Bitcoin()
{
}

float &Bitcoin::getPrix()
{
    return _prix;
}

int &Bitcoin::getYear()
{
    return _year;
}
int &Bitcoin::getMonth()
{
    return _month;
}
int &Bitcoin::getDay()
{
    return _day;
}
std::string &Bitcoin::getFormat()
{
    return _format;
}
float &Bitcoin::getValue()
{
    return _value;
}
Bitcoin Bitcoin::operator=(Bitcoin &other)
{
    _year = other._year;
    _month = other._month;
    _day = other._day;
    _prix = other._prix;
    _format = other._format;
    return *this;
}
bool Bitcoin::operator>(Bitcoin &other)
{
    if (_year >= other._year)
    {
        if (_year > other._year)
            return true;
        if (_month >= other._month)
        {
            if (_month > other._month)
                return true;
            if (_day > other._day)
                return true;
        }
    }
    return false;
}
bool Bitcoin::operator<(Bitcoin &other)
{

    if (_year <= other._year)
    {
        if (_year < other._year)
            return 1;
        if (_month <= other._month)
        {
            if (_month < other._month)
                return 2;
            if (_day < other._day)
                return 3;
        }
    }
    return 0;
}
