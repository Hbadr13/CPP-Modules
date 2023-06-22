
#include "PmergeMe.hpp"
#include <iostream>
#include <chrono>
#include <exception>
int main(int ac, char **av)
{
    (void)ac;
    try
    {

        PmergeMe merg(av);

        std::chrono::system_clock::time_point startTime;
        std::chrono::system_clock::time_point endTime;
        std::chrono::duration<double> duration;
        std::cout << "Before: ";
        merg.print(merg.getDeque());
        /////////////
        //   DEQUE
        /////////////
        startTime = std::chrono::system_clock::now();
        std::cout << "\nAfter: ";
        merg.mergeSort(merg.getDeque());
        endTime = std::chrono::system_clock::now();
        duration = std::chrono::duration_cast<std::chrono::microseconds>(endTime - startTime);
        merg.print(merg.getDeque());
        std::cout << "\nTime to process a range of " << merg.getDeque().size() << " elements with std::deque : " << duration.count() << " us" << std::endl;

        /////////////
        //  LIST
        /////////////
        startTime = std::chrono::system_clock::now();
        merg.mergeSort(merg.getDeque());
        endTime = std::chrono::system_clock::now();
        duration = std::chrono::duration_cast<std::chrono::microseconds>(endTime - startTime);

        std::cout << "Time to process a range of " << merg.getList().size() << " elements with std::list : " << duration.count() << " us" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    catch (const std::invalid_argument &e)
    {
        std::cerr << e.what() << '\n';
    }
}
