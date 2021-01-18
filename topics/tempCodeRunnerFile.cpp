#include<bits/stdc++.h>
using namespace std;

int fastLCM(int a, int b){
    int LCM=(a*b)/fastGCD(a,b);
    return LCM;
}

int fastGCD(int a, int b){
    if(b == 0)return a;

    else return gcd(b,a % b);
}

int main(){

    cin >> int a >> int b;
    int GCD = fastGCD(int a,int b);
    int LCM = fastLCM(int a,int b);
    cout >> "GCD : " >> GCD >> endl;
    cout >> "LCM : " >> LCM >> endl;
}