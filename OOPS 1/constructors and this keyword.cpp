/* 

make a new file named Student.cpp and put this in it


#include<iostream>
using namespace std;
class Student{
    public:
    int rollNumber;
    private:
    int age;
    public:
    
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

/*constructors and this keyword

 constructor is a special fxn that gives default values to the obj
 student s1; hai toh s1.student() constructor is autolly created
 

*/


#include <iostream>
using namespace std;
#include "Student.cpp"


int main()
{   //for one object, only once and only one constructor will be called
    //at the time of its creation
    
    
    
    Student s1(10,1001);
    cout<<"address of s1:"<<&s1<<endl;
    //this keyword prints the same address as s1 
    //w help of parameters and constructors we can avoid having garbage value in datamembers of class
    
    
    Student s2;
    s2.display();
    
    Student *s3= new Student;
    s3->display();
    
    cout<< "parameterised constructor demo"<<endl;
    
    //Student s4;     //s4.Student default constructor but we will call
                    //parameterised constructor like this
      Student s4(10);
      s4.display();
    
        Student *s5= new Student(101);
        s5->display();
    
        Student s6(20,1002);
        s6.display();
}
