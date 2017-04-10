#include <iostream>
#include <fstream>
#include "Hufftree.h"
#include "Bitcode.h"

Hufftree buildtree();

int main(int argc, char* argv[])
{
    if(argc != 4) std::cout << "Incorrect number of arguments";
    std::ofstream code(argv[3]);
    std::ifstream freq(argv[1]);
    if(!freq) std::cout << "Cannot open frequency file";
    std::ofstream tree(argv[2]);

    Hufftree huff;
    huff.buildtree(freq);
    huff.print(tree);
    huff.genBits(code);
    return 0;
}

