#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
// #define MAX_DATA 99999
// #define MAX_INT 2147483647
class RPN
{
private:
    std::string _argument;
    std::vector<std::string> _data;
    int _rpn;
public:
    ~RPN();
    RPN();
    RPN(std::string arg);
    std::vector<std::string> &getData();
    int getRPN();
    int Parsing();
    int find_RPN();
};
void msg_error();
void print(std::vector<std::string> vect);
