//return subsequences of a string
//imp
#include <iostream>

using namespace std;

//subsequences means koi bi character utha lo (2^n subsequences)
//substring is a continuous array of the string

int subs(string input, string output[]) {
	if (input.empty()) {    //empty fxn 
		output[0] = "";
		return 1;
	}

	string smallString = input.substr(1);
	int smallOutputSize = subs(smallString, output);
	for (int i = 0; i < smallOutputSize; i++) {
		output[i + smallOutputSize] = input[0] + output[i];
	}
	return 2 * smallOutputSize;
}

int main() {
	string input;
	cin >> input;
	string* output = new string[1000]; //dynamic allocation
	int count = subs(input, output);
	for (int i = 0; i < count; i++) {
		cout << output[i] << endl;
	}
}
