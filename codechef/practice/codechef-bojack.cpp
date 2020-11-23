#include<iostream>
#include<cstring>
using namespace std;
int pcount = 0;
int count = 0;

void palindrome(char * substring) {
	int len = strlen(substring);
	//cout << len << endl;
	len = len -1;
	for (int i = 0; i <= len; i++){
		if (substring[i] != substring[len]){
			//cout << len;
			return;	
		}
		len--;
	}
	pcount++;
}

void printsubstrings(char *arr) {
	for (int i = 0; arr[i] != '\0'; i++) {
		char substring[100];
		for (int j = i; arr[j] != '\0'; j++) {
			for (int k = i; k <= j; k++) {
				substring[j-i] = arr[k];
				
			}
			substring[j-i+1] = '\0';
			count++;
			palindrome(substring);
		}
	}
}

int main() {
	char arr[100];
	cin >> arr;
	printsubstrings(arr);
	cout << "total substrings : " << count << endl;
	cout << "total palindromic substring : " << pcount ;
}
