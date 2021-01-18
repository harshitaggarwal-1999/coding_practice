#include<bits/stdc++.h>
#define ll long long
using namespace std;
// time complexity O(n)
int binpower(ll a, ll b){
    if(a==0)return 1;
    if(b==0){
        return 1;
    }

    int res = binpower(a,b/2);
    if(b%2==1){//no. is odd
        return res*res*a;
    }else{
        return res*res;
    }

}

int main(){
    ll a;
    ll b;
    cin >> a;
    cin >> b;
    int ans = binpower(a,b);
    cout << ans << endl;
}