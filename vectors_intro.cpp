/*
vectors
similar to dynamic array
pushback is a fxn in which current size and everything is checked. direct changing value will not increase size. random memory pe jaake tum value nahi daal sakte,which is not
allocated by vector ka banaya hua array.it'll print garbage value after the last entered value. We'll only use square bracket for get and update, not insert.
dont use [] to insert elements

*/
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;   //template         //static allocation
    //vector <int> vp=new vector<int>();  //dynamic allocation
    for(int i=0;i<100;i++)
        v.push_back(i+1);
    v.push_back(10);
    v.push_back(20); //10 ke peeche dalega 20
    v.push_back(30);
    v.pop_back();   //last element delete
    v[1]=100;
    
    
    cout<<v[0]<<endl;
    //cout<<v[3]<<endl;    it'll even print garbage
    
    cout<<v.size()<<endl;
    cout<<v.at(1)<<endl;
   // cout<<v.at(6)<<endl;    //outofrange. at fxn is safer as it wont print garbage value.
    
    for(int i =0;i<v.size();i++)
        cout<<v[i]<<endl;
    
    cout<<v.capacity()<<endl;   //works in 2 ki power ki capacity
    
    
    
    
    return 0;
}
