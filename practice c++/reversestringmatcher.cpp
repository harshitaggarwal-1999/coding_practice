#include <iostream>
#include <string>
using namespace std;

int main(){
	string main;
	cin >> main;
	int samechar = 0;
	int last = main.length()-1;
	if(main.length()%2 == 0){
		for(int start = 0; start <= (main.length()/2)-1; start++){
			if(main.at(start) == main.at(last)){
				samechar = samechar+2;
			}
			last--;
		}
	} else {
		for(int start = 0; start <= (main.length()/2)-1; start++){
			if(main.at(start) == main.at(last)){
				samechar = samechar+2;
			}
			last--;
		}
		samechar++;
	}
	cout << samechar << endl;
}
