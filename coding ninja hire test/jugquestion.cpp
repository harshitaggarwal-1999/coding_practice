#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        
        cin >> a >> b >> c;
        
        int p = max(a,b);
        
        int q = min(a,b);
        
        
        
        if(p == c || q == c || (p+q) == c || (p-q) == c){
            cout << "Yes" << endl;
        } else if(p%q == 0) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }   
    
    return 0;
}