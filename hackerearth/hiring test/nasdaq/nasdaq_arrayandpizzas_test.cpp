//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//void check(int* arr, int n){
//    for (int i = 0;  i < n; i++){
//        cout << arr[i] << " ";
//    }
//        
//}
//
//int arrayandpizzas(int* arr, int n){
//    int sum = 0;
//    int checker = 1;
//    for(int i = 0; i < n; i++) {
//        if(i == checker){
//            sum = sum + arr[i];
//            checker = checker + 4;
//        }
//
//    }
//    return sum;
//        
//}
//
//int main(){
//    
//    int n;
//    cin >> n;
//        // vector* arr = new vector[n];
//    int* arr = new int[n];
//    for (int i = 0; i < n; i++){
//        cin >> arr[i];
//    }
//    sort(arr, arr + n);
//        // int sum = arrayandpizzas(arr, n);
//    check(arr, n);
//    cout << endl;
//    int sum  = arrayandpizzas(arr, n);
//    cout << sum << endl;
//    delete[] arr;
//}

#include <iostream>
#include <algorithm>
using namespace std;

// void check(int* arr, int n){
//     for (int i = 0;  i < n; i++){
//         cout << arr[i] << " ";
//     }
        
// }

int arrayandpizzas(int* arr, int n){
    unsigned long long int sum = 0;
    int checker = 1;
    for(int i = 0; i < n; i++) {
        if(i == checker){
            unsigned long long int m = 1;
            m = (m*arr[i])%1000000007;
            sum = sum  + m;
            sum = sum % 1000000007;
            checker = checker + 4;
        }

    }
    return sum;
        
}

int main(){
    
    int n;
    cin >> n;
        // vector* arr = new vector[n];
    int* arr = new int[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
        // int sum = arrayandpizzas(arr, n);
    // check(arr, n);
    // cout << endl;
    unsigned long long int sum  = arrayandpizzas(arr, n);
    cout << sum;
    
    delete[] arr;
}
