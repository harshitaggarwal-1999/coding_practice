#include <iostream>
#include "treenodeclasss.h"
using namespace std;

int main() {
    Treenode<int>* root = new Treenode<int>(1);
    Treenode<int>* node1 = new Treenode<int>(2);
    Treenode<int>* node2 = new Treenode<int>(3);

    root->children.push_back(node1);
    root->children.push_back(node2);
}
