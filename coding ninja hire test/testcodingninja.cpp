#include<iostream>
#include<cstring>
#include<stack>
using namespace std;

int main(){
    
    // cout << given << endl;;
    // for(int i = 0; i < given.length(); i++){
    //     cout << given.at(i) << endl;
    // }
    // int q;
    // cin >> q;
    // while(q--){
    //     int strtindex,endindex;
    //     cin >> strtindex >> endindex;
    //     int midindex = (strtindex+endindex)/2;
    //     stack<char> s;
    //     for (int i = strtindex; i <= endindex; i++){
    //         if((strtindex-endindex) %2 == 0){
    //             if(i < midindex){
    //                 s.push(given.at(i));
    //             }else if(i > midindex){
    //                 if(given.at(i) == s.top())s.pop();
    //                 else continue;
    //             }else{
    //                 continue;
    //             }
    //         }else{
    //             if(i <= midindex)s.push(given.at(i));
    //             else {
    //                 if(given.at(i) == s.top()){
    //                     s.pop();
    //                 }else{
    //                     continue;
    //                 }
    //             } 
    //         }
    //     }
    //     if (s.empty())cout << "Yes";
    //     else cout << "No";
    // }

    int freq1[256];
    int freq2[256];
    // freq table prepared
    for (int i =0; i < 256; i++){
        freq1[i] = 0;
        freq2[i] = 0;
    }
    // inputs
    string given;
    cin >> given;
    int q;
    cin >> q;
    while (q-- >0){
        // main thing
        int strtindex;
        int endindex;
        cin >> strtindex >> endindex;
        // calculatinbg mid index
        int midindex = (strtindex+endindex)/2;
        for(int i = strtindex; i <= endindex; i++){
            if((endindex - strtindex) %2 == 0){
                if(i < midindex){
                    freq1[given.at(i)]++;
                }else if(i > midindex){
                    freq2[given.at(i)]++;
                }else{
                    continue;
                }
            }else{
                if(i <= midindex)freq1[given.at(i)]++;
                else freq2[given.at(i)]++;        
                
            } 
        }
        bool check = true;
        for(int i =0; i < 256; i++){
            if(freq1[i] != freq2[i]){
                check = false;
                break;
            }
        }
        if(check) cout <<"Yes";
        else cout << "No";
    }
}
     
    

