#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		bool odd = false;
		int freq[256];
		for (int i = 0; i < 256; i++) {
			freq[i] = 0;
		}
		int strsize;
		char str[1000];
		cin >> strsize;
		cin >> str;
		for (int i = 0; i < strsize; i++) {
			int num = str[i];
			freq[num]++;
		}
		for (int i = 0 ; i < 256; i++) {
			if ((freq[i] % 2) != 0){
				cout << "NO";
				odd = true;
				break;
			}
		}
		if (!odd) {
			cout << "YES";
		}
		//odd = false;
	}
}


