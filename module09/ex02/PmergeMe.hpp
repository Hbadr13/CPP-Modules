#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <list>
#include <deque>
#include <sys/time.h>
#include <iterator>

#define MAX_DATA 99999
#define MAX_INT 2147483647
#include<unistd.h> 
class PmergeMe
{
private:
    std::deque<int> _deque;
    std::list<int> _list;

public:
    ~PmergeMe();
    PmergeMe();
    PmergeMe(char **arg);
    std::list<int> &getList();
    std::deque<int> &getDeque();
    void mergeSort(std::deque<int> &deqe);
    void mergeSort(std::list<int> &list);
    void print(std::list<int> &obj);
    void print(std::deque<int> &obj);
};
void msg_error();
