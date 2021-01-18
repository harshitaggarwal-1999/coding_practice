//											WEIRD ALGORITHM
#include<iostream>

using namespace std;
typedef long long ll;
void bruteforcemethod(ll n){
	
	while(n!=1){
		cout << n << " ";
		if(n%2 == 0){
			n=n/2;
		}else{
			n=(n*3)+1;
		}
		
	}
	cout << 1 << endl;
	
}
int main(){
	ll n;
	cin >> n;
	bruteforcemethod(n);
}
