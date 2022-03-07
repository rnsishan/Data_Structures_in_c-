//L2 MACROS AND GLOBAL VARIABLES
/*
<include> is PRE PROCESSOR DIRECTIVE
#define

bad practice to use GLOBAL VARIABLES.
ek change sab change.
*/

#include <iostream>
using namespace std;
#define pi 3.14
int a;
void g(){
    a++;
    cout<<a<<endl;
    
}
void f(){
    cout<<a<<endl;
    a++;
    g();
}

int main()
{
    a=10;
    f();
    cout<<a<<endl;
    return 0;
}
