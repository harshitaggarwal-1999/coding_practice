#include<bits/stdc++.h>
using namespace std;
#define max 100001
vector<int>* sieve(){
	bool isprime[max];
	
//	we start with thinking all are prime
	for(int i =0; i < max; i++){
		isprime[i] = true;
	}
	
	for(int i = 2; i*i<max; i++){
		if(isprime[i]){
			for(int j = i*i; j < max; j += i){
				isprime[j] = false;
			}
		}
	}
	vector<int>* primes = new vector<int>();
	primes->push_back(2);
	for(int i = 3; i < max; i+=2){
		if(isprime[i]){
			primes->push_back(i);
		}
	}
	
	return primes;
}


void printprimes(long long l, long long r, vector<int>* &primes){
	bool isprime[r-l+1];
	
	for(int i =0; i <= r-l; i++){
		isprime[i] = true;
	}
	
	for(int i = 0; primes->at(i) * primes->at(i) <= r; i++){
		int currprime = primes->at(i);
		long long base = (l/currprime)*currprime;
		if(base < l)base = base + currprime;
		
		for(long long j = base; j <= r; j += currprime){
			isprime[j-l] = false;
		}
		
		if(base ==  currprime){
			isprime[base-l] = true;	
		}
	}
	
	for(int i = 0; i <= r-l; i++){
		if(isprime[i] == true){
			cout << i+l  << endl;	
		} 
	}
}

int main(){

	long long l;
	long long r;
	cin >> l >> r;
	vector<int>* primes = sieve();
	printprimes(l, r, primes);
	return 0;
}
