#include "RPN.hpp"
void msg_error()
{
    std::cout << "Error: " << std::endl;
    exit(1);
}
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
std::vector<std::string> split_string(std::string str)
{
    std::vector<std::string> vect;
    std::string mot;
    int start;
    size_t i;

    i = 0;

    while (i < str.size())
    {
        while (str[i] && str[i] == ' ')
            i++;
        start = i;
        while (str[i] && str[i] != ' ')
            i++;
        mot = str.substr(start, i - start);
        if (!mot.empty())
            vect.push_back(mot);
        i++;
    }
    return vect;
}
int RPN::Parsing()
{
    std::vector<std::string> vect;
    _data = split_string(_argument);
    int i = 0;
    return 0;
}
void print(std::vector<std::string> vect)
{
    int i = 0;
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
    int i;
    i = 0;
    while (_data.size() != 1)
    {
        i = 0;
        while (i < _data.size())
        {
            if (_data[i] == "*")
            {
                element = std::to_string(std::stoi(_data[i - 2]) * std::stoi(_data[i - 1]));
                _data.erase(_data.begin() + i);
                _data.erase(_data.begin() + i - 1);
                _data.erase(_data.begin() + i - 2);
                _data.insert(_data.begin() + i - 2, element);
                i = -1;
            }
            else if (_data[i] == "+")
            {
                element = std::to_string(std::stoi(_data[i - 2]) + std::stoi(_data[i - 1]));
                _data.erase(_data.begin() + i);
                _data.erase(_data.begin() + i - 1);
                _data.erase(_data.begin() + i - 2);
                _data.insert(_data.begin() + i - 2, element);
                i = -1;
            }
            else if (_data[i] == "-")
            {
                element = std::to_string(std::stoi(_data[i - 2]) - std::stoi(_data[i - 1]));
                _data.erase(_data.begin() + i);
                _data.erase(_data.begin() + i - 1);
                _data.erase(_data.begin() + i - 2);
                _data.insert(_data.begin() + i - 2, element);
                i = -1;
            }
            else if (_data[i] == "/")
            {
                element = std::to_string(std::stoi(_data[i - 2]) / std::stoi(_data[i - 1]));
                _data.erase(_data.begin() + i);
                _data.erase(_data.begin() + i - 1);
                _data.erase(_data.begin() + i - 2);
                _data.insert(_data.begin() + i - 2, element);
                i = -1;
            }
            i++;
        }
    }
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