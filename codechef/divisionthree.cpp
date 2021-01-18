#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T > 0){
    	int N,K,D;
    	cin >> N >> K >> D;
    	int numofques = 0;
    	for(int i = 0; i < N; i++){
    	    int ques;
    	    cin >> ques;
    	    numofques += ques;
    	}
    	
    	int numofcontest = numofques/K;
    	
    	if(numofcontest > D){
    	    cout << D << endl;
    	}
    	else{
    		cout << numofcontest << endl;
		}
    	T--;
	}
	
	
}

