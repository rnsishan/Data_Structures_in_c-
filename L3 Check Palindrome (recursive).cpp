/*
L3 Check Palindrome (recursive)

*/


#include <iostream>
using namespace std;
#include<cstring>


bool helper(char input[], int s, int e)
{
    if(s >= e){
        return true;
    }
    
    if(input[s] != input[e]){
        return false;
    }
    
    bool ans = helper(input, s+1, e-1);
    
}

bool checkPalindrome(char input[])
{
    int l  = strlen(input);
    return helper(input,0,l-1);
}



int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}

