//L3 RECURSION AND ARRAYS
//check if array is sorted
#include <iostream>

using namespace std;

/*
bool is_sorted2(int a[],int size){  //iss wale me pehele aage se check karege if it is sorted or not.
// then we'll check if the first two are sorted or not. this is an alt to is_sorted
    
    if(size==0 || size==1){
        return true;
    }
    
    bool issmallerOutput=is_sorted2(a+1,size-1);
    if(!issmallerOutput){
        return false;
    }
    
    if(a[0]>a[1]){
        return false;
        
    }
    else{
        return true;
    }
}*/

bool is_sorted(int a[],int size){
    if(size==0 || size==1){
        return true;
    }
    if(a[0]>a[1]){
        return false;
    }
    bool issmallersorted= is_sorted(a+1,size-1);    //aage ka array call kar rahe hai after first element
    
    return issmallersorted;
    
}

int main()
{
    int a[]={1,0,3,2,4,5};
    is_sorted(a,6);
    

    return 0;
}
