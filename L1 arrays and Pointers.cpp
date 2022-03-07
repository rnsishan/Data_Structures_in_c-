//L1 arrays and Pointers
#include <iostream>

using namespace std;

int main()
{
    int a[10];
    a[0]=5;
    //a and a[0] will print the same thing
    cout<<*a<<endl;
    *a=*a+1;
    cout<<*a<<endl;
    // *(a+i) is same as a[i]
    // i[a] is same as *(i+a)
   
    int *p[100];            //incase of pointer
    cout<<sizeof(p)<<endl; //800 will be printed
    return 0;
}
//2 differences
//sizeof
// & operator
//a and &a will give same address in arrays 
//incase of pointer,uska alag address hoga
//array cannot be reassigned
//for example a=a+1 wont work. array ka address nahi badal sakte
//p=p+1 will work cos pointer
//a=a+1; it'll fail here cos array
//a ke corresponding koi alag memory hai hee nahi toh store kaise karoge
