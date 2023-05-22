#include <iostream>
#include <string>
#include <sstream>
// int check_year_is_leap(int year)
// {
//     if (year % 400)
//         return 0
// }

int to_int(std::string str)
{
    std::stringstream ss;
    ss << str;
    int number;
    ss >> number;
    return number;
}
int main(int ac, char **av)
{
    std::string s[99999];
}