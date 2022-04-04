/*
L6 GETTERS AND SETTERS
getter used to read private value
setter fxn used to change update any private property

*/
#include <iostream>

using namespace std;

class Student{
    public:
    int rollNumber;
    
    private:    
    int age;
    
    public:
    
    void display(){ //this fxn can access pvt properties as well
        cout<<age<<" "<<rollNumber<<" "<<endl;
    }
    int getAge(){
        return age; //this fxn can access age
    } 
    void setAge(int a/*,int password*/){
        /*if(password!=123){
            return;
        }*/
        if(a<0)         //constraint laga sakte ho
            return;
        age=a;
    }
};

int main()
{   Student s1;
    Student *s2 = new Student;  //dynamic
    s1.setAge(24);
    s2->setAge(20);

    s1.display();
    s2->display();
    
    //cout<< s1.getAge()<<endl;   //it has garbage value rn

    
    
    return 0;
}
