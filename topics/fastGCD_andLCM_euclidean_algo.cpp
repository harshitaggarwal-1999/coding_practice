#include<bits/stdc++.h>
using namespace std;

int fastGCD(int a, int b){
    // if(b == 0)return a;

    // else return fastGCD(b,a % b);

    // can be written one liner
    return b ? fastGCD(b,a % b) : a;
}

long long fastLCM(int a, int b){
    long long LCM=(a*b)/fastGCD(a,b);
    return LCM;
}


int main(){
    int a,b;
    cin >> a >> b;
    int GCD = fastGCD(a, b);
    long long LCM = fastLCM(a, b);
    cout << "GCD : " << GCD << endl;
    cout << "LCM : " << LCM << endl;
}