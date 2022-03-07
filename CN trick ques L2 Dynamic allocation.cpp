//CN ques L2 Dynamic allocation

#include <iostream>

using namespace std;

void updateValue(int *p){
    *p = 610 % 255;
}
int main()
{
    char ch = 'A';
    updateValue((int*)&ch);
    cout<<ch;
    
}
