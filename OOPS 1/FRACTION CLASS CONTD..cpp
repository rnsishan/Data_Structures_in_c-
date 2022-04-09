/*
create new file named Fraction.cpp


#include <iostream>
using namespace std;
class Fraction {
	private :

		int numerator;
		int denominator;

	public :

		Fraction(int numerator, int denominator) {
			this -> numerator = numerator;
			this -> denominator = denominator;
		}

		void print() {
			cout << this -> numerator << " / " << denominator << endl;
		}


		void simplify() {
			int gcd = 1;
			int j = min(this -> numerator, this -> denominator);
			for(int i = 1; i <= j; i++) {
				if(this -> numerator % i == 0 && this -> denominator % i == 0) {
					gcd = i;
				}
			}
			this -> numerator = this -> numerator / gcd;
			this -> denominator = this -> denominator / gcd;
		}

		//void add(Fraction f2)      //copy constructor used but iska use is not necessary, use pass by reference
		                          //to avoid copy constructor use pass by reference.
		void add(Fraction const &f2){  //this creates a reference to f2 and new copy nai banegi 
		//but we want to avoid unnecessary changes after simplify. to avoid that constant ref is used, write int const &k=i;
		//now you cant do k++; 
		
		
			int lcm = denominator * f2.denominator;
			int x = lcm / denominator;
			int y = lcm / f2.denominator;

			int num = x * numerator + (y * f2.numerator);

			numerator = num;
			denominator = lcm;

			simplify();	

		}
		
		void multiply(Fraction const &f2){
		    numerator=numerator*f2.numerator;
		    denominator=denominator*f2.denominator;
		    
		    simplify();
		}
};

*/

/*
L6 OOPS 1 FRACTION CLASS CONTD.

*/
#include <iostream>
using namespace std;
#include"Fraction.cpp"

int main()
{
    Fraction f1(10,2);
    Fraction f2(15,4);
    
    f1.add(f2);
    
    f1.print();
    f2.print();
    
    f1.multiply(f2);
    f1.print();
    f2.print();
    return 0;
    
}
