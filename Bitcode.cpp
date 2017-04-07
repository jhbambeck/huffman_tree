#include "Bitcode.h"

void Bitcode::input(char c, std::string b)
{
    pairArray[index].ch = c;
    pairArray[index].bits = b;
    ++index;
}

void Bitcode::print()
{
    for(int i = 0; i < index; i++)
    {
        std::cout << pairArray[i].ch << " " << pairArray[i].bits << std::endl;
    }
}

