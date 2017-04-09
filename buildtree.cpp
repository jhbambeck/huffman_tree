#include <iostream>
#include <fstream>
#include "Hufftree.h"
#include "Bitcode.h"

Hufftree buildtree();

int main()
{
    std::ofstream code("code");
    std::ifstream freq("complex_freq");
    std::ofstream tree("tree");

    Hufftree huff;
    huff.buildtree(freq);
    huff.print(tree);
    huff.genBits(code);
    return 0;
}

