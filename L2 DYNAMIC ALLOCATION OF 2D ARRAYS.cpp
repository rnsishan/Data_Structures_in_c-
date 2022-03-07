//L2 DYNAMIC ALLOCATION OF 2D ARRAYS
/*
this isnt allowed :"new a[10][10]"
using heaps only

syntax //int **twoDArray = new int*[10]; 

you need double pointer in order to store pointers array using heap

you can create designer/jagged 2D array cos its your choice kitne elements
daalne hai.

deleting/safai v imp deleting each and every array and then pointer array
*/
#include <iostream>

using namespace std;

int main()
{
    int m,n;                     //taking user input
    cin>>m>>n;
    int **p=new int*[m];        //creating the array of pointers
    //p[0]=new int[20];        //creating individual rows that those ptrs will point to
    //better to use for loop
    
    for(int i=0;i<m;i++){
        p[i]= new int[n];
        for(int j=0;j<n;j++){
            cin>>p[i][j];
        }
    }
    delete [] p; //this is wrong. go sequence wise
    //deletion          
    for(int i=0;i<n;i++){   //rows/array deletion
        delete [] p[i];
    }
    delete [] p; //pointer wala array deletion
    
    
    return 0;
}
