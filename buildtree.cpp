#include <iostream>
#include "Hufftree.h"

Hufftree buildtree();

int main()
{
    Hufftree huff;
    huff.buildtree();
    huff.print();
    return 0;
}

