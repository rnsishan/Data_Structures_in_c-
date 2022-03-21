/* L3 recursion Count Zeros
Given an integer N, count and return the number of zeros that are present in the given integer using recursion.
*/

#include <iostream>
using namespace std;


int countZeros(int n) {
    // Write your code here
    if(n==0){
        return 1;
    }
    if(n<10){
        return 0;
    }
    else if(n%10==0){
      return 1+countZeros(n/10);
    }
    	
    return countZeros(n/10);
}

int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}

/*Working
 * 
 * the recursive call is done in the following Manner 
 * initially from main(10204)
 * 1st recursive call return countZerosRec(input/10);    (1020)
 * 2nd recursive call return 1+countZerosRec(input/10);  (1+countZerosRec(102))
 * 3rd recursive call return countZerosRec(input/10);    (10)
 * 4th recursive call return 1+countZerosRec(input/10);  (1+countZerosRec(1))
 * Now Falling Back of Recursive Calls
 * 3rd recursive call return countZerosRec(input/10);    (1)
 * 2nd recursive call return 1+countZerosRec(input/10);  (2)
 * 1st recursive call return countZerosRec(input/10);    (2)
 *  2  will be returned to the main
 * */
