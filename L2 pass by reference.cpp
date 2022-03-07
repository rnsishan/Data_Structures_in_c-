//L2 pass by reference
#include <iostream>

using namespace std;


void increment(int &n){ //pass by reference kia i ko.
                        //ab dono share same address.so dono jagah changes aayege.
                        // nayi memory nai banani padegi
    n++;        
}
int &f(int n){          //return by reference (can be risky)
                        //value return hogi and same address pe as k. 2 location nai banegi 
    int a=n;          //mirror
    return a;

                        //this is bad practice cos memory can be erased by system.
                        //warning: reference to local variable ‘a’
}

int main()
{
    //reference variables
    int i=10;
    increment(i);
    
    int &k1=f(i);
    int &j=i;                   //int j=i pe nai chalega
    i++;
    cout<<i<<" "<<j<<endl;    //j dont change, cos hai toh 2 diff variable
                            //we need to declare j as reference variable to allow changes
                            //to happen in j as well
                             //we do &
    
   // int &j=i; done above
    
    int k=100;
    j=k;                //i,j,k teeno ab 100
    cout<<i<<endl;
    
    //you need to declare and initialise &j ek saath.int &j=i;
    //cant break it into two steps
    return 0;
}
