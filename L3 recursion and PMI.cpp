//L2 RECURSION AND PMI
/*
basic principle of Recursion is PMI. 3 steps involved in PMI
1. proving base case is true i.e. F(0) is true
2. ASSUME F(k) is true
3. Prove using 2 that F(K+1) is true


*/


#include <iostream>
using namespace std;
int factorial(int n){
if(n==0){   /base case
return 1;
}
  int smalloutput=factorial(n-1);   //assume it'll work for a smaller problem
  int output=n*smalloutput; //pass it
  return output;
}


int main()
{
  cout<<factorial(4)<<endl;    
  return 0;
}
