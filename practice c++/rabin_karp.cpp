#include<iostream>
#define MAXCHAR 256
using namespace std;

void rabinKarpSearch(string mainString, string pattern, int prime, int array[], int *index) {
   int patLen = pattern.size();
   int strLen = mainString.size();
   int charIndex, pattHash = 0, strHash = 0, h = 1;

   for(int i = 0; i<patLen-1; i++) {
      h = (h*MAXCHAR) % prime;    
   }
   
   for(int i = 0; i<patLen; i++) {
      pattHash = (MAXCHAR*pattHash + pattern[i]) % prime;    
	  
	        strHash = (MAXCHAR*strHash + mainString[i]) % prime;   
   }
   
   for(int i = 0; i<=(strLen-patLen); i++) {
      if(pattHash == strHash) {      //when hash values are same check for matching
         for(charIndex = 0; charIndex < patLen; charIndex++) {
            if(mainString[i+charIndex] != pattern[charIndex])
               break;
         }

         if(charIndex == patLen) {    //the pattern is found
            (*index)++;
            array[(*index)] = i;
         }
      }

      if(i < (strLen-patLen)) {    //find hash value for next window
         strHash = (MAXCHAR*(strHash - mainString[i]*h) + mainString[i+patLen])%prime;
         if(strHash < 0) {
            strHash += prime;    //when hash value is negative, make it positive
         }
      }
   }
}

int main() {
   string mainString = "HARSHITAGGISASIMPLEBOY";
   string pattern = "AGG";
   int locArray[mainString.size()];
   int prime = 101;
   int index = -1;
   rabinKarpSearch(mainString, pattern, prime, locArray, &index);

   for(int i = 0; i <= index; i++) {
      cout << "Pattern found at position: " << locArray[i]<<endl;
   }
}
