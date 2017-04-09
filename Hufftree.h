#ifndef HUFFTREE_H
#define HUFFTREE_H
#include <iostream>
#include <fstream>
#include "Bitcode.h"

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
    void buildtree(std::ifstream&);
    int chartoint(char);
    bool swapNeeded(Node*, Node*);
    void swap(Node* [], int, int);
    void bubbleSort(Node* [], int);
    void printPreRec(Node*, std::ofstream&);
    void print(std::ofstream&);
    void genBits(std::ofstream&);
    void genBitsRec(Node*, std::string&, Bitcode&);

};

#endif // HUFFTREE_H
