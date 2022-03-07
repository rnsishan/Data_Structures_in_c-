//L1 DOUBLE POINTER
#include <iostream>

using namespace std;

void increment1(int **p){
    p=p+1;  //this wont reflect changes as sirf copy me changes aaye
    
}

void increment2(int **p){
    *p=*p+1;    //this'll reflect changes
    
}

void increment3(int **p){
    **p=**p+1;  //this'll reflect changes
    
}

int main()
{
    //why int *
    //we able to dereference and we know what datatype we pointing to
    
    //double pointer store address of pointers
    // int *p=&i;
    // "int*" * p2=&p;
    
    
    int i=10;
    int *p=&i;
    int **p2=&p;
    cout<<p2<<endl;
    cout<<&p<<endl; //both cout print same address
    
    cout<<p<<endl;
    cout<<*p2<<endl;    //same cheez print
    
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;   //same value prints
    
    
    
    
    return 0;
}
