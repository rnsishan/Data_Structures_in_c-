/*
Pair Star
Given a string S, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".
*/

// Change in the given string itself. So no need to return or print the changed string.

#include <iostream>

#include<cstring>

using namespace std;

void pairStar(char input[]) {
    // Write your code here
	if(strlen(input)==1){
        return;
    }
    if(input[0]==input[1]){
        for(int i=strlen(input);i>=0;i--)
            	input[i+1]=input[i];
        		input[1]='*';
    }
    pairStar(input+1);
}
int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}
