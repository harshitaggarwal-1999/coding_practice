#include <iostream>
using namespace std;
#include<cmath>

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		long long int sum = 0;
		int size;
		cin >> size;
		int arr[100000];
		for (int i = 0; i < size; i++) {
			cin >>  arr[i];
		}
		for (int i = 0; i < size-1; i++) {

			int dif = arr[i+1] - arr[i] ;
			dif = fabs(dif)-1;
			//cout << dif << endl;
			sum = sum + dif;
		}
		cout << sum << endl;
	}
}
