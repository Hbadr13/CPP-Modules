#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        msg_error();
    RPN *rpn = new RPN(argv[1]);
    rpn->Parsing();
    rpn->find_RPN();
    std::cout << rpn->getRPN() << std::endl;
    delete rpn;
    
    return 0;
}
