#include "PmergeMe.hpp"
void msg_error()
{
    std::cout << "Error: " << std::endl;
    exit(1);
}
PmergeMe::~PmergeMe()
{
}
PmergeMe::PmergeMe()
{
}
PmergeMe::PmergeMe(char **arg)
{
    int i = 1;
    while (arg[i] != NULL)
    {
        if (std::stod(arg[i]) < 0)
            msg_error();
        if (std::stod(arg[i]) > MAX_INT)
            msg_error();

        _deque.push_back(std::stoi(arg[i]));
        _list.push_back(std::stoi(arg[i]));
        _argument.push_back(std::stoi(arg[i]));
        i++;
    }
}
std::list<int> &PmergeMe::getList()
{
    return _list;
}
std::list<int> &PmergeMe::getArgument()
{
    return _argument;
}
std::deque<int> &PmergeMe::getDeque()
{
    return _deque;
}
int PmergeMe::sort1()
{
    _list.sort();
    return 0;
}

int PmergeMe::sort2()
{
    std::deque<int> copy;
    int min;
    int i = 0;
    int index = 0;
    while (true)
    {
        if (_deque.empty())
            break;
        i = 0;
        index = 0;
        min = _deque[0];
        while (i < _deque.size())
        {
            if (_deque[i] < min)
            {
                index = i;
                min = _deque[i];
            }
            i++;
        }
        copy.push_back(min);
        _deque.erase(_deque.begin() + index);
    }
    return 0;
}
void PmergeMe::print(std::list<int> &obj)
{
    std::list<int>::iterator it;
    it = obj.begin();
    for (it = obj.begin(); it != obj.end(); it++)
        std::cout << *it << " ";
}
void PmergeMe::print(std::deque<int> &obj)
{
    std::deque<int>::iterator it;
    it = obj.begin();
    for (it = obj.begin(); it != obj.end(); it++)
        std::cout << *it << " ";
}

void PmergeMe::small_problems()
{
    std::deque<int> dst1(_deque.begin(), _deque.begin() + _deque.size() / 2);
    std::deque<int> dst2(_deque.begin() + _deque.size() / 2, _deque.end());
    _X.push_back(dst1);
    _X.push_back(dst2);
    while (_X.size() != _argument.size())
    {
        std::deque<std::deque<int>>::iterator it = _X.begin();
        std::deque<std::deque<int>> copy;
        while (it != _X.end())
        {
            std::deque<int> dst1((*it).begin(), (*it).begin() + (*it).size() / 2);
            std::deque<int> dst2((*it).begin() + (*it).size() / 2, (*it).end());
            if (!dst1.empty())
                copy.push_back(dst1);
            if (!dst2.empty())
                copy.push_back(dst2);
            it++;
        }
        _X = copy;
    }
}
std::deque<int> sort(std::deque<int> &obj)
{
    int min;
    int i = 0;
    while (i < obj.size() - 1)
    {
        if (obj[i + 1] < obj[i])
        {
            min = obj[i];
            obj[i] = obj[i + 1];
            obj[i + 1] = min;
            i = -1;
        }
        i++;
    }
    return obj;
}
void PmergeMe::solv_problems()
{
    std::deque<std::deque<int>> copy;
    std::deque<int> elem;
    while (_X.size() != 1)
    {
        std::cout << "1================================\n";

        std::deque<std::deque<int>>::iterator it = _X.begin();
        while (it != _X.end())
        {
        std::cout << "2================================\n";
            sort(*it);
            elem = (*it);
            it++;
            if (it != _X.end())
            {
                sort(*it);
                elem.insert(elem.end(), (*it).begin(), (*it).end());
            }
            copy.push_back(elem);
            if (it != _X.end())
                it++;
            elem.clear();
        }
        _X = copy;
        copy.clear();
    }
    sort(_X[0]);
    _deque = _X[0];
}