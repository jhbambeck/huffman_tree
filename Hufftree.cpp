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
        else if(nodePtr->frequency == lowest->frequency)
        {

        }
    }
    std::cout << "lowest: " << lowest->ch << std::endl;
}


//for sorting based on char
int Hufftree::chartoint(char ch)
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
