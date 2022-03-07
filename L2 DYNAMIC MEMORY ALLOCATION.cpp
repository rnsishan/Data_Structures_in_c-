//L2 DYNAMIC MEMORY ALLOCATION

    /*2 types of memory:stack and heap
    stack memory allocation is done at compile time.static allocation
    heap mem allocation is dynamic. during runtime
    int i=10; int a[20]; all of this is in stack memory
    stack memory choti hoti hai and agar int a[n], n bada hua then stack wont std::forward_list<T> ;
    
    heap syntax: new "datatype"; //new keyword
    new gets you the memory address
    naam nahi hota heap pe;
    int *p=new int;       //always store karke use karo heap
    *p=10;   //*p dereferencing to mem in heap*/
#include <iostream>

using namespace std;

int main()
{
    
    int *p=new int; //4 byte on heap, 8 byte on stack of ptr p 
    *p=10;
    cout<<*p<<endl;
    
                    //double *pd=new double;
                    //char *c=new char;
    
    //to create array
    //also finding max int 
    int n;  //user input of size
    cin>>n;             
    int * pa2=new int[n];   //now this is fine to create array
                            //dynamically allocated
   // pa2[0]=10;              //*(pa2+i) same as array ptr can be used
    
    int max=-1;
    for(int i=0;i<n;i++){
        cin>>pa2[i];
    }
    for(int i=0;i<n;i++){
        if(max<pa2[i]){
            max=pa2[i];
        }
        
    }
    cout<<max<<endl;
    
    //Major difference between static and dynamic memory
    //automatic release on basis of scope (in static)
    //manual release of memory(in dynamic)
    
    //crash program
    while(true){
        int *p=new int; //heap
        //this'll keep allocating memory and at one time it'll crash
        //memory khud release nai hoti in DMA
    
        //to release use "DELETE" keyword
        //DELETE p; //ptr pointing to jis memory is deleted
                    //not the ptr
        
    }
    //to delete array
    p =new int[100];
    delete [] p; //keyword [] 
    
    
    return 0;
}
