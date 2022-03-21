/*Remove X
Given a string, compute recursively a new string where all 'x' chars have been removed.*/
// Change in the given string itself. So no need to return or print anything
#include <iostream>
#include<cstring>
using namespace std;

void removeX(char input[]) {
    // Write your code here
	 if(strlen(input) == 0) return;
   	removeX(input + 1);
    if(input[0] == 'x'){
        for(int i=1; i<=strlen(input); i++) input[i-1] = input[i];
    	return;
    }
}

int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}

