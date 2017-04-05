#include <iostream>
#include "Hufftree.h"

Hufftree buildtree();

int main()
{
    Hufftree huff;
    huff.buildtree();
    std::cout << huff.chartoint('$');
    return 0;
}

