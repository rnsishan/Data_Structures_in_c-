//L3 recursion //all indices of a number hint 1 and 2
/*

Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. Save all the indexes in an array (in increasing order).
Do this recursively. Indexing in the array starts from 0.
*/
//understand it w dry run
#include <iostream>

using namespace std;


int allIndexes(int input[], int size, int x, int output[]) {
  int count=0;
  int ans=0;
  
  if(size==0){
      return 0;
      
  }
 ans= allIndexes(input,size-1,x,output);
 if(input[size-1]==x){
     output[ans]=size-1;
     return ans+1;
 }
 return ans;
}
int main()
{
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    int *output = new int[n];
    
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
    
    delete [] input;
    
    delete [] output;

    return 0;
}

