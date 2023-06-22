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
            throw std::invalid_argument("ERROR: Negative Integer");
        if (std::stod(arg[i]) > MAX_INT)
            throw std::invalid_argument("ERROR: Number Greater Than Max Int");
        if (_deque.size() > MAX_DATA)
            throw std::invalid_argument("Out Of Range: Max Data is " + std::to_string(MAX_DATA));
        _deque.push_back(std::stoi(arg[i]));
        _list.push_back(std::stoi(arg[i]));
        i++;
    }
}

std::list<int> &PmergeMe::getList()
{
    return _list;
}

std::deque<int> &PmergeMe::getDeque()
{
    return _deque;
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

void PmergeMe::mergeSort(std::deque<int> &dequ)
{
    if (dequ.size() < 2)
        return;
    std::deque<int> lefth(dequ.begin(), dequ.begin() + dequ.size() / 2);
    std::deque<int> right(dequ.begin() + dequ.size() / 2, dequ.end());
    mergeSort(lefth);
    mergeSort(right);
    size_t i, j, k;
    i = j = k = 0;
    while (i < lefth.size() && j < right.size())
    {
        if (lefth[i] < right[j])
            dequ[k++] = lefth[i++];
        else
            dequ[k++] = right[j++];
    }
    while (i < lefth.size())
        dequ[k++] = lefth[i++];
    while (j < right.size())
        dequ[k++] = right[j++];
}

void PmergeMe::mergeSort(std::list<int> &list)
{

    if (list.size() < 2)
        return;
    std::list<int>::iterator middle = std::next(list.begin(), list.size() / 2);
    std::list<int> lefth(list.begin(), middle);
    std::list<int> right(middle, list.end());
    mergeSort(lefth);
    mergeSort(right);
    std::list<int>::iterator i, j, k;
    i = lefth.begin();
    j = right.begin();
    k = list.begin();

    while (i != lefth.end() && j != right.end())
    {
        if (*i < *j)
            *(k++) = *(i++);
        else
            *(k++) = *(j++);
    }
    while (i != lefth.end())
        *(k++) = *(i++);

    while (j != right.end())
        *(k++) = *(j++);
}