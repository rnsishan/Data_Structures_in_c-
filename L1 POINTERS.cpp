//DATA STRUCUTRES IN C++
//L1 POINTERS 
#include <iostream>

using namespace std;

int main()
{
    //for every variable created,the system is storing where is that variable
    //actually stored
    
    int i=10;
    cout<<&i<<endl; //address of i
    // pointers can store this address
    // pointers store the addresses of variables
    // jis chees ka address uska datatype
    // int *p= &i;
    //* is dereference operator
    //cout<<*p will print the value pointed by p.
    //generally sizeof(p) will give 8 BYTES.
    
    
    int *p=&i;
    int *q=p; //q also pointing to i,like p
    i++;
    
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<*q<<endl;
    
    int *k=0;   //null ptr. there is nothing there 
    cout<<k<<endl; //after this you try to ++k, there is nothing there so will give
    (*k)++; //segmentation error. trying to access memory which you should not.
    cout<<k<<endl;
    
    
    
    
    
    return 0;
}

