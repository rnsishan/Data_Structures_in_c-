/*
String to Integer
Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.
*/

#include <iostream>
#include<cstring>
#include<cmath>
using namespace std;

int stringToNumber(char input[]) {
    // Write your code here
	if(strlen(input) == 0) 
        return 0;
    int a = input[0] - 48;
    return (a* pow(10, strlen(input) - 1)) + stringToNumber(input+1);
    }


int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}
