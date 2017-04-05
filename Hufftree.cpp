#include "Hufftree.h"

void Hufftree::buildtree()
{
    //open frequency file
    std::fstream basic_freq;
    basic_freq.open("basic_freq");
    if(!basic_freq)
    {
        std::cout << "Cannot open frequency file";
    }

    //create array of Nodes and populate
    Node* nodeArray[30];
    int freq = 0;
    char c = ' ';
    for(int i = 0; i < 30; i++)
    {
        Node * newNode = new Node;
        basic_freq >> c;
        basic_freq >> freq;
        newNode->ch = c;
        newNode->frequency = freq;
        nodeArray[i] = newNode;
    }

    //find lowest frequency Node
    Node * lowest = nodeArray[0];
    Node * nodePtr = nullptr;
    for(int i = 0; i < 30; i++)
    {
        nodePtr = nodeArray[i];
        if(nodePtr->frequency < lowest->frequency)
        {
            lowest = nodePtr;
        }
    }
    std::cout << "lowest: " << lowest->ch << std::endl;
}
