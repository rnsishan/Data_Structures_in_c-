/*

L6 CREATING OBJECTS

*/
#include <iostream>
using namespace std;
#include "Student.cpp"  //student file gets copied in this file


int main()
{
    /*
  student s1; //OBJECT      8bytes
  int a;     //variable
 
 int *a new int;
 //8 byte ka pointer of int dynamically allocated using heap
 Student * s2=new Student; //8byte ptr storing address of dma heap
 */

    //create object statically
    Student s1;
    s1.rollNumber=24;
    s1.age=18;      //value dene ke liye dot operator
    cout<<s1.age<<endl;
    
    //create object dynamically
    Student *s6=new Student;
    (*s6).age=20;
    (*s6).rollNumber=102;
    //or s6->age=23;    s6->rollNumber=104;
    
    //error: private within this context.
    
    /*ACCESS MODIFIERS
        types
        1. public 2. private 3. protected
        private is defined as bahar not accessible not even visible
        if public property, kahi bi use kar sakte ho
    
        by default private access MODIFIER hota hai
        
        once you set it to public, fir normally chalega
        
 
 */
    return 0;
}
