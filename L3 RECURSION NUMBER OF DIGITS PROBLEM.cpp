//Number of Digits
/*
Given the code to find out and return the number of digits present in a number recursively. But it contains few bugs, that you need to rectify such that all the test cases should pass.
*/

#include<iostream>
using namespace std;

int count(int n){
    int cnt=0;
    
    if(n<=0){
        return 0;
    }
    int small=count(n/10);
    int ans= small+1;
    
    return ans;
    
    
}

int main(){
    int n;
    cin >> n;
  
    cout << count(n) << endl;
}


