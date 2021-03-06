#ifndef BITCODE_H
#define BITCODE_H
#include <iostream>
#include <fstream>
#include <string>

class Bitcode
{
public:
    struct CodePair
    {
        char ch;
        std::string bits;
    };

    int index = 0;
    CodePair pairArray[30];

    void input(char, std::string);
    void print(std::ofstream&);
    int chartoint(char);
    bool swapNeeded(CodePair, CodePair);
    void swap(int, int);
    void bubbleSort();
};

#endif // BITCODE_H
