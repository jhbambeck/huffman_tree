#ifndef HUFFTREE_H
#define HUFFTREE_H
#include <iostream>
#include <fstream>

class Hufftree
{
public :
    struct Node
    {
        char ch;
        int frequency;
        Node * left = nullptr;
        Node * right = nullptr;
    };
    Node * root = nullptr;
    void buildtree();
    int chartoint(char);
};

#endif // HUFFTREE_H
