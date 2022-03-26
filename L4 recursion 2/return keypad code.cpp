//return keypad approach
/*
base case

hypothesis: 234 hai. 23 pe call kia recursion 234/10 and (234%10)
9 possible outputs. uske baad ghi sabke aage laga denge by making 3
copies(jitne possible characters hai dialer ke of last digit ) 
of the 23 ke subsequences. total 27 subsequences. 0 will
return empty string.


*/

#include <iostream>
#include <string>
using namespace std;

int keypad(int num, string output[]){
    if(num==0 || num==1){
        output[0]="";
        return 1;
    }
    
    string key_pad[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    int quo = num/10;
    int rem = num%10;
    
    int c = keypad(quo,output);
    int y = key_pad[rem].size();
    int x = c*y;
    
	string a[c];
    for(int i=0;i<c;i++){
        a[i]=output[i];
    }
    
   for(int i=0;i<x;i++){
       output[i]=a[i/y]+key_pad[rem][i%y];
   }
    
    return x;
    
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
}

using namespace std;

int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}

