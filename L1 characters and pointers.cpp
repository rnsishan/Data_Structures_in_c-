//L1 characters and pointers
#include <iostream>

using namespace std;

int main()
{
    int a[]={1,2,3};
    char b[]="avc";
    cout<<a<<endl;  //prints the address
    
    char *c=&b[0];  
    cout<<c<<endl; //prints the whole content of char array
    
    char c1='a';
    char *pc=&c1;   //this ptr works differently
    cout<<c1<<endl;//this'll print a
    cout<<pc<<endl; //its gonna print till it finds a null char
    
    
    //difference between
    char str[]="abcde"; //gets stored in a temp mem w a null char
    //creates a 6 size array and copies content
    //and makes str array
    
    char * pstr[]="abcde";
//the ptr is created that points to that new temp memory and 
//thats v wrong cos it is Read only space hai,error aa sakta h
    
    
    
    
    return 0;
}
