#include<iostream>
#include<climits>
using namespace std;

int altsubs(int *arr, int n) {
    int maxsum1 = 0;
    int maxsum2 = 0;
    for (int i = 0; i < n; i = i+2) {
        maxsum1 = maxsum1 + arr[i];
        
    }
    
    for (int i = 1; i < n; i = i+2) {
        maxsum2 = maxsum2 + arr[i];
    }

    
    if(maxsum1>maxsum2)return maxsum1;
    else return maxsum2;
    

}

int main(){
    int t;
    cin >> t;
    while(t!= 0){
        int n;
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int maxsum = altsubs(arr,n);
        cout << maxsum ;
        // for (int i = 0; i < n; i++) {
        //     cout << arr[i] << " ";
        // }
        delete[] arr;
        t--;
    }
}
