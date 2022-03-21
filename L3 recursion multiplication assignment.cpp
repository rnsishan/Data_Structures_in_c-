//L3 recursion multiplication assignment
/*
Given two integers M & N, calculate and return their multiplication using recursion. You can only use subtraction and addition for your calculation. No other operators are allowed.


*/
#include <iostream>

using namespace std;
int multiplyNumbers(int m, int n) {
    // Write your code here

    if( n==0){
        return 0;
    }
    if(m==1){
        return n;
    }
    if(n==1){
        return m;
    }
    int ans=0;
    ans= multiplyNumbers(m,n-1);

    return ans+m;
}
int main()
{
     int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;

    return 0;
}
