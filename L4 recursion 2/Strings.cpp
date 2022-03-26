//l4 recursion 2 strings
#include <iostream>

using namespace std;

int main()
{
    string* sp = new string;
	*sp = "def";
	cout << sp << endl;
	cout << *sp << endl;

	string s = "abc";
	//getline(cin, s);  //ek ek line karke input le sakte ho
	cout << s << endl;
	
	s = "defdef";
	cout << s[0] << endl;
	s[0] = 'a';
	string s1;
	s1 = "def";

	string s2 = s + s1;
	cout << s2 << endl;

	s += s1;

	cout << s1 << endl;
	cout << s << endl;

	cout << s.size() << endl;           //size dekh sakte ho
	cout << s.substr(3) << endl;	  //substring printed after 3rd index
	cout << s.substr(3, 3) << endl;	//3rd se leke 3 next element print karega

	cout << s.find("def") << endl; 
	//finding index of def pehla def jidhar mila.


    

    return 0;
}
