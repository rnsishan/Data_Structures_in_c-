//L3 fibonacci number
/*
PMI has extended case
1. same base case F(0) is TRUE
2. ASSUME F(i) is true for all i<=k
3. use 2 to prove F(k+1) is true

*/
#include <iostream>
using namespace std;

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    
    int smalloutput1=fib(n-1);
    int smalloutput2=fib(n-2);
    return smalloutput1+smalloutput2;
    
}

int main()
{
    cout<<fib(3)<<endl;
    

    return 0;
}
