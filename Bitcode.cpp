#include "Bitcode.h"

void Bitcode::input(char c, std::string b)
{
    pairArray[index].ch = c;
    pairArray[index].bits = b;
    ++index;
}

void Bitcode::print()
{
    std::ofstream code;
    code.open("basic_code");
    for(int i = 0; i < index; i++)
    {
        code << pairArray[i].ch << " " << pairArray[i].bits << std::endl;
    }
}

bool Bitcode::swapNeeded(CodePair first, CodePair second)
{
    int f = chartoint(first.ch);
    int s = chartoint(second.ch);
    if(f<s) return true;
    return false;
}

void Bitcode::swap(int first, int second)
{
    CodePair temp = pairArray[first];
    pairArray[first] = pairArray[second];
    pairArray[second] = temp;
}

void Bitcode::bubbleSort()
{
    for(int i = 0; i < index; i++)
    {
        for(int j = index - 1; j>i; j--)
        {
            if(swapNeeded(pairArray[j], pairArray[j-1]))
            {
                swap(j, j-1);
            }
        }
    }
}

int Bitcode::chartoint(char ch)
{
    switch(ch)
    {
    case 'a': return 0;
    case 'b': return 1;
    case 'c': return 2;
    case 'd': return 3;
    case 'e': return 4;
    case 'f': return 5;
    case 'g': return 6;
    case 'h': return 7;
    case 'i': return 8;
    case 'j': return 9;
    case 'k': return 10;
    case 'l': return 11;
    case 'm': return 12;
    case 'n': return 13;
    case 'o': return 14;
    case 'p': return 15;
    case 'q': return 16;
    case 'r': return 17;
    case 's': return 18;
    case 't': return 19;
    case 'u': return 20;
    case 'v': return 21;
    case 'w': return 22;
    case 'x': return 23;
    case 'y': return 24;
    case 'z': return 25;
    case '-': return 26;
    case '.': return 27;
    case '!': return 28;
    case '+': return 29;
    case '$': return 30;
    }
}
