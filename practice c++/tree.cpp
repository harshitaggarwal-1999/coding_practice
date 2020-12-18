#include <iostream>
#include "treenodeclasss.h"
#include<queue>
using namespace std;

Treenode<int>* takeinputlevelwise(){
    int rootdata;
    cout << "enter the root data: ";
    cin >> rootdata;
    Treenode<int>* root = new Treenode<int>(rootdata);
    queue<Treenode<int>*> pendingnodes;
    pendingnodes.push(root);
    while(!pendingnodes.empty()){
        Treenode<int>* front = pendingnodes.front();
        int numchild;
        cout << "enter the no. of children of " << front->data << ": ";
        cin >> numchild;
        pendingnodes.pop();
        for(int i = 0; i < numchild; i++){
            int childdata;
            cout << "enter the " << i+1 << "th child of " << front->data << ": ";
            cin >> childdata;
            Treenode<int>* child = new Treenode<int>(childdata);
            front->children.push_back(child);
            pendingnodes.push(child);
        }

    }
    return root;

}

void printtreelevelwise(Treenode<int>* root){
    
}

void printTree(Treenode<int>* root){
    cout << root->data << ": ";
    for(int i = 0; i < root->children.size(); i++){
        cout << root->children[i]->data << ",";
    }
    cout << endl;
    for(int i = 0; i < root->children.size(); i++){
        printTree(root->children[i]);
    }
}

Treenode<int>* Takeinput(){
    int rootdata ;
    cout << "Enter the root data :";
    cin >> rootdata;
    Treenode<int>* root = new Treenode<int>(rootdata);
    int n;
    cout << "No. of children of " << rootdata << ": ";
    cin >> n;
    for (int i = 0; i < n; i++){
        Treenode<int>* child = Takeinput();
        root->children.push_back(child);
    }
    return root;
}

int main() {
    // making tree manually
    // Treenode<int>* root = new Treenode<int>(1);
    // Treenode<int>* node1 = new Treenode<int>(2);
    // Treenode<int>* node2 = new Treenode<int>(3);

    // root->children.push_back(node1);
    // root->children.push_back(node2);
    Treenode<int>* root = takeinputlevelwise();
    printTree(root);
}
