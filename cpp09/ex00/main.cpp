#include "BitcoinExchange.hpp"
#include <sstream>

#include <stdlib.h>

int main(int ac, char **av)
{
    try
    {
        if (ac != 2)
            throw std::string("NUMBER OF ARGUMENTS.");
        BitcoinExchange bitcoins("data.csv");
        bitcoins.initialization(av[1]);
    }
    catch (const std::string &str)
    {
        std::cerr << str << '\n';
    }
}
