#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;



int chefsladdu(int* arr, int n, int k) {
    int diffrence = INT_MAX;
    sort(arr,arr+n);
    if(k == 1) {
        return 0;
    }
    
    else{
    	int i = 0;
    	int j = k-1;
        while (j < n) {
        	if((arr[j] - arr[i]) < diffrence) {
        		diffrence = (arr[j] - arr[i]) ;
        		
			}
			i++;j++;
		}
    }
    return diffrence;
}

int main() {
    int t;
    cin >> t;
    while (t!= 0) {
        int n;
        int k;
        cin >> n;
        cin >> k;
        int *arr = new int[n];
        for (int i = 0;  i < n; i++) {
            cin >> arr[i];
        }
        int ans = chefsladdu(arr, n,k);
        cout << ans << endl;
        delete[] arr;
        t--;
    }
}
