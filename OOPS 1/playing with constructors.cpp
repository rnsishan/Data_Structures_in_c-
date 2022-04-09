/*
Create a new file named Student.cpp
#include<iostream>
using namespace std;
class Student{
    public:
    int rollNumber;
    private:
    int age;
    public:
    
    ~Student(){                             //Destructor
        cout<<"Destructor called"<<endl;
    }
    
    
    
    //default constructor
    Student(){  //no argument in this constructor
        cout<<"constructor called"<<endl;
    }
    //error if default constructor is commented: no matching function for call to Student::Student()
    
    //parameterised constructor
    Student(int r){
        cout<<"constructor 2 called"<<endl;
        rollNumber=r;   //constructor w 1 argument
        
    //important    // if name was same as 'rollNumber' then variable closest to scope is accessible
      // this->rollNumber=rollNumber; aise likhte fir
       
        }
    Student(int a,int r){
        cout<<"this:"<<this<<endl;
    
     //THIS keyword holds the address of current object
     //THIS is a pointer variable
    
        cout<<"constructor 3 called"<<endl;
        age=a;
        this->rollNumber=r;
        
    }
    
    void display(){
        cout<<age<<" "<<rollNumber<<endl;
    }
    int getAge(){
        return age;
    }
    
    void setAge(int a,int password){
        if(password!=123){
            return;
        }
        if(a<0){
            return;
        }
        age=a;
    }
};

*/



/*
L6 OOPS 1 playing with constructors

*/
#include <iostream>
using namespace std;
#include "Student.cpp"

int main()
{
    Student s1; //constructor 1 called
    
    Student s2(101); // rollNo passed. constructor 2 called
    
    Student s3(20,102);     //constructor 3 called
    
    Student s4(s3);     //copy constructor called
    
    s1=s2;              //no constructor called as they already exist in memory
                        //copy assignment operator is used
                        
    Student s5 = s4;     // internally student s5(s4) hota hai
                        //copy constructor used
                        //cos s5 naya bana hai, it didnt exist before
                        
    
    

    return 0;
}
