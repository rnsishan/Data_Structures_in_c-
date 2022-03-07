//L2 CONSTANT POINTERS contd
#include <iostream>

using namespace std;

//v imp difference b/w int const *p  and int * const p

int main()
{
    int i=10;
    int j=21;
    int const *p =&i; //p is a pointer which is pointing to a constant integer
    
    p=&j;           //mai jisko point kar raha hu usko change nai karuga
                   //you can change p. but *p++ wont work
        
                    // but if you want ptr to be constant, then do this
    int * const p2=&i; //p2 is a constant ptr to an integer.
                    //here p2 is constant.. i is not constant
    (*p2)++;        //will work
    p2=&j; //wont work. p2 is constant ptr
    
 int const * const p3=&i; //p3 is a constant ptr to a constant integer
// p3=&j; (*p3)++ wont work.
//here you cant change, only read


//understand the variations of const


    return 0;
}
