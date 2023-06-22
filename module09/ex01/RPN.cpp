#include "RPN.hpp"

RPN::~RPN()
{
}
RPN::RPN()
{
}
RPN::RPN(std::string str)
{
    _argument = str;
}
bool is_number(const std::string &s)
{
    size_t i = 0;
    while (i < s.size())
    {
        if (!isdigit(s[i]))
            return false;
        i++;
    }
    return true;
}
std::vector<std::string> split_string(std::string str)
{
    std::vector<std::string> vect;
    std::string stroperation("*/+-");
    std::string mot;

    int start;
    size_t i;

    i = 0;
    int number = 0;
    int operation = 0;
    while (i < str.size())
    {
        while (str[i] && str[i] == ' ')
            i++;
        start = i;
        while (str[i] && str[i] != ' ')
            i++;
        mot = str.substr(start, i - start);
        if (number > MAX_DATA)
            throw std::string("Out Of Range: Max Data is " + std::to_string(MAX_DATA));
        if (!mot.empty())
        {
            if (stroperation.find(mot) != std::string::npos)
                operation++;
            else if (!is_number(mot))
                throw std::string("Syntax invalid: Example valid \"5 4 8 * -\".");
            else
                number++;
            vect.push_back(mot);
        }
        i++;
    }
    if (number - 1 != operation)
        throw std::string("Syntax invalid:: Example valid \"5 4 8 * -\".");

    return vect;
}
int RPN::Parsing()
{
    _data = split_string(_argument);
    return 0;
}
void print(std::vector<std::string> vect)
{
    size_t i = 0;
    std::cout << "================\n";
    while (i < vect.size())
    {
        std::cout << vect[i] << std::endl;
        i++;
    }
}
int RPN::find_RPN()
{
    std::string element;
    size_t i;
    i = 0;
    std::string operation("*/+-");
    while (_data.size() != 1)
    {
        i = 0;
        while (i < _data.size())
        {
            if (operation.find(_data[i]) != std::string::npos)
            {
                if (i < 2)
                    throw std::string("Syntax invalid:: Example valid \"5 4 8 * -\".");
                if (_data[i] == "*")
                    element = std::to_string(std::stoi(_data[i - 2]) * std::stoi(_data[i - 1]));
                else if (_data[i] == "-")
                    element = std::to_string(std::stoi(_data[i - 2]) - std::stoi(_data[i - 1]));
                else if (_data[i] == "/")
                    element = std::to_string(std::stoi(_data[i - 2]) / std::stoi(_data[i - 1]));
                else if (_data[i] == "+")
                    element = std::to_string(std::stoi(_data[i - 2]) + std::stoi(_data[i - 1]));
                _data.erase(_data.begin() + i);
                _data.erase(_data.begin() + i - 1);
                _data.erase(_data.begin() + i - 2);
                _data.insert(_data.begin() + i - 2, element);
                i = -1;
            }
            i++;
        }
    }
    if (operation.find(_data[0]) != std::string::npos)
        throw std::string("Syntax invalid:: Example valid \"5 4 8 * -\".");
    _rpn = std::stoi(_data[0]);
    return _rpn;
}

std::vector<std::string> &RPN::getData()
{
    return _data;
}
int RPN::getRPN()
{
    return _rpn;
}