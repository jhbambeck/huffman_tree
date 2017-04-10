#include <iostream>
#include <fstream>
#include "Hufftree.h"
#include "Bitcode.h"

Hufftree buildtree();

int main(int argc, char* argv[])
{
    if(argc != 2) std::cout << "Incorrect number of arguments";
    std::ofstream code("code");
    std::ifstream freq(argv[1]);
    if(!freq) std::cout << "Cannot open frequency file";
    std::ofstream tree("tree");

    Hufftree huff;
    huff.buildtree(freq);
    huff.print(tree);
    huff.genBits(code);
    return 0;
}

