//L1 pointer arithmetic

#include <iostream>

using namespace std;

int main()
{
    int i=10;
    int *p=&i;
    cout<<p<<endl;
    p++;  //adds 4 to hexadecimal address
    //this'll only make sense in case of arrays
    cout<<p<<endl;
    
    double d=102.3;
    double *dp=&d;
    cout<<dp;
    dp++; //this'll +8 to address
    cout<<dp;
    return 0;
}
