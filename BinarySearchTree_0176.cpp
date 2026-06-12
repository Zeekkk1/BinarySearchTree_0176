#include <iostream>
using namespace std;

class node {


public:
    string info;
    Node* leftChild;
    Node* RightChild;

    Node(string i, Node* l, Node* r) {
        info = i;
        leftChild = l;
        rightChild = r;
    }
};