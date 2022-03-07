//L2 Dynamic Allocation
//Address Typecasting
#include <iostream>
using namespace std;
//little endian and big endian systems 
int main()
{
    //the ques is, are you allowed to do this.
    //like in int. int i=65; char c=i;
    //can you
    // int*p=&i;
    // char *pc=p;
    //no you cant.error ayega normally
    //but use explicit typecasting
    int i=65;
    char c =i;  //implicit typecasting
    cout<<c<<endl;
    
    int *p=&i;
    char *pc=(char*)p; //explicit typecasting
    
    cout<<p<<endl;  //address print hoga, next is exception cos char
    cout<<pc<<endl; //goes to location and prints location incase of char
    
    
    cout<<*p<<endl; //gives A
    cout<<*pc<<endl;    //gives 65. ulte order me integer 65 0 0 0
    //char *pc ki pehli byte me LSB at first i.e. 65
    //int *p me 0 0 0 65
    cout<<*(pc+1)<<endl;    //gives 0
    
    cout<<*(pc+2)<<endl;    //gives 0
    
    cout<<*(pc+3)<<endl;    //gives 0
    return 0;
}

