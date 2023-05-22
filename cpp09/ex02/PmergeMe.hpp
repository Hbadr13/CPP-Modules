#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <list>
#include <deque>
#include <sys/time.h>
// #define MAX_DATA 99999
#define MAX_INT 2147483647
#include<unistd.h> 
class PmergeMe
{
private:
    std::list<int> _argument;
    std::deque<int> _deque;
    std::list<int> _list;
    std::deque<std::deque<int> > _X;
    int _PmergeMe;

public:
    ~PmergeMe();
    PmergeMe();
    PmergeMe(char **arg);
    std::list<int> &getList();
    std::deque<int> &getDeque();
    std::list<int> &getArgument();
    int sort1();
    int sort2();
    void print(std::list<int> &obj);
    void print(std::deque<int> &obj);
    void small_problems();
    void solv_problems();
};
void msg_error();
