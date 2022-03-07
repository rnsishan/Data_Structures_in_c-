//L1 pointers and functions

#include <iostream>

using namespace std;

void print(int *p){
    cout<<*p<<endl;
    
}

void incrementPointer(int *p){
    p=p+1;
}

void increment(int *p){
    (*p)++;
}

int sum(int a[],int size){  //a goes as a pointer
    cout<<sizeof(a)<<endl;  //8
    int ans=0;
    for(int i=0;i<size;i++){
        ans+= a[i]; //ptr can behave as array
    }
    return ans; //garbage sum print karega input lia hee nai
    
}
int main()
{ 
    
    
    int a[10];
    cout<<sizeof(a)<<endl;  //40
    cout<<sum(a+3,7)<<endl;
    //you can also pass part of an array like a+3 
    
    
    
    
    
    // int i=10;
    // int *p=&i;
    
    // print(p);
    
    // cout<<p<<endl;
    // incrementPointer(p);
    // cout<<p<<endl;//no farak in main ka p, copy me change aya not main

    // cout<<*p<<endl;
    // increment(p);   //this'll increment the value in main
    // cout<<*p<<endl;
    
}


