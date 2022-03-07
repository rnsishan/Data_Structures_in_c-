//L2 INLINE AND DEFAULT ARGUMENTS

#include <iostream>
using namespace std;

inline int max(int a,int b){
    return(a>b)?a:b;
}
//inline copies fxn body in place of fxn call

//default: 

int sum(int a[],int size,int si=0){ //int si=0 is default value of si
    for(int i=si;i<size;i++){
        ans+=a[i];
    }
}

int sum2(int a,int b,int c,int d=0){

    return a+b+c+d; //agar d nai dia,toh d =0 le lia jayega by default
    //sum2(a,b,c) this works fine cos d default 0 jayega.
    //4 argument le raha hai and 3 arg me bi chalega
    
}
int main(){
    
    int a[20];
    //input code for a
    cout<<sum(a,20,0)<<endl;    //0 wala argument became optional
    
    //default ka rule: IMPORTANT
    //rightmost se default value dena shuru karte hai.
    
    
    
    /* 
    Inline ka use
    int a,b;
    cin>>a>>b;
            //tertiary operator
            //int c=(a>b)?a:b;
            //cout<<c;
    int z=max(a,b);
    
    return z;
    //if fxn longer than 3 lines,complier wont do inline

*/
}

