//L2 CONSTANT POINTERS
//continuation of last vid

#include <iostream>

using namespace std;
// const lag gaya ptr ko toh wo sirf read kar sakta hai,no change



void g(int const &a){   //fxn promise wont change
    a++;    //cant do this. read only
}


void f(const int*p){
    (*p)++; //wont work. read only
}

int main()
{
    int const i=10;
    int const *p=&i;
// *p=15; //wont work
 //you cannot store address of const variable in a POINTER
 //you need to put a const *p. const lagana zaruri hai
 //read only path. koi change nahi kar sakta i ki value

    
    int j=12;   //has perm to write
    int const *p2=&j; //this is fine. only read cos ptr pe const laga hai
    cout<<*p2<<endl;
    j++;            
    cout<<*p2<<endl;
    
    //benefit of const:
    //fxn calling
    j=12;
    int *p3=&j;
    f(p3);
    g(p3);
    cout<<*p3<<endl;
    
    
    
}
