#include <iostream>
#include<algorithm>
using namespace std;

// void printarray(int *arr, int n) {
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
// }

int chefandada(int* arr, int n) {
    int sum = arr[0];
    int diffrence = arr[0];
    for (int i = 1; i < n; i++){
        diffrence = diffrence - arr[i];
        if (diffrence < 0) {
            diffrence = -1 * diffrence;
            sum  = sum + diffrence;
        }

    }
    return sum;
    

}

int main() {
	int t;
	cin >> t;
	for (int i  = 0; i < t; i++) {
	    int n;
	    cin >> n;
	    int* arr = new int[n];
	    for(int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    sort(arr, arr + n);
	    
        int *arrmain = new int[n];
        for(int i  = 0; i < n; i++) {
            arrmain[i] = arr[n-1-i];
        }
        delete []arr;
        
        int totaltime = chefandada(arrmain,n);
        cout << totaltime << endl;           
        delete []arrmain;
	}
	return 0;
}
