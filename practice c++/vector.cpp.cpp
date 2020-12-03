#include <iostream>
#include <vector>
using namespace std;

int main(){
    // int size;
    // cin >> size;
    // std::vector<int> dynvec = new std::vector<int>();
    vector<int> v;

    v.push_back(5);
    cout << "size : " << v.size() << endl;
    // cout << "size : " << dynvec.size() << endl;
    // v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    // v.push_back(9);
    // v.push_back(1);
    // v.push_back(3);
    for (int i = 0; i < v.size(); i++){
        cout << i << " : " << v[i] << endl;
    }
    cout << v.capacity() << endl;

}