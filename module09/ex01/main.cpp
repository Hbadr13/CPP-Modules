#include "RPN.hpp"

int main(int argc, char **argv)
{
    try
    {
        if (argc != 2)
            throw std::string("ERROR.");
        RPN *rpn = new RPN(argv[1]);
        rpn->Parsing();
        rpn->find_RPN();
        std::cout << rpn->getRPN() << std::endl;
        delete rpn;
    }
    catch (const std::string &str)
    {
        std::cerr << str << '\n';
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
