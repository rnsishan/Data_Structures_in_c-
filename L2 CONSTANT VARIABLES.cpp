//L2 CONSTANT VARIABLES

//CONST
/*

you cannot change a variable that has const in it.
it becomes read only
and you must initialise it,otherwise const wont work.

*/
#include <iostream>
using namespace std;


int main()
{
        const int i=10;
        int const i2=10;    //same thing
        cout<<i<<endl;
    int j=12;
    
    //const reference from a non const int
    const int &k=j; //constant reference(path) ho gya k ka,not storage
   // k++;    //wont work,read only reference
    j++;    //this is ok;
    cout<<k<<endl;
    
    
    //const reference from a const int
    
    int const j2=12;
    int const &k2=j2;
    //cant do any incrememt on these
    
    //reference from a const int
    int const j3=123;
    int &k3=j3; //cant do this
    //you cant create a path and write on a const int.
    //you can only read
    k3++;
    
    return 0;
}
