/*
Create a new file by the name "Student.cpp" and add this

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

//main file


/*
L6 OOPS 1 inbuilt constructor and destructor


1. default constructor
2. copy constructor: student s1(10,1001);
                        student s2(s1);     inbuilt copy constructor

3. copy assignment operator(=)
4. destructor-> obj ki mem deallocate karana
                no return type
                take no input arguments
                ~(tilda) symbol is used
                ~Student(){
                                //structure of destructor
                }        
    if you created your own destructor, default wala use nai hoga fir
    It can be declared in private section
*/
#include <iostream>
using namespace std;
#include "Student.cpp"


int main()
{
    
    //copy constructor
    
    Student s1(10,1001);
    cout<< "S1:";
    s1.display();
    
    //copying s1 values in s2
    
    Student s2(s1);     //copy constructor
    cout<<"s2:";
    s2.display();
    
    Student *s3= new Student(20,2001);
    cout<< "s3:";
    
    s3->display();
    
    Student *s4 = new Student(*s3); //copy constructor
    
    cout<<"s4:";
    s4->display();
    
    
    *s4=s2; //copy assignment operator
    
    cout<<"s4:";
    s4->display();
    
    
    delete s4;  //ispe normally destructor call nai hoga cos 
        //      ye Dynamically allocated hai, ispe jab delete chalayega
        //tab destructor chalega.
    
    
    
    
    return 0;
}
