/*L3 recursion Geometric Sum
Given k, find the geometric sum i.e.
1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
*/
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double geometricSum(int k) {
    // Write your code here
    double ans=0,a=0;
    if(k==0){
        return 1;
    }
    ans=1/(double)pow(2,k);
    a=(ans+geometricSum(k-1));
    return a;
}



int main() {
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;   
}

