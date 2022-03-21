//sum of digits(recursive)

#include <iostream>

using namespace std;
int sumOfDigits(int n) {
    // Write your code here
    int ans=0;
    if(n<10){
        return n;
    }
    ans=sumOfDigits(n/10);
    ans=ans+(n%10);
    
    return ans;

    
}




int main() {
   int n;
   cin >> n;
   cout << sumOfDigits(n) << endl;
}
