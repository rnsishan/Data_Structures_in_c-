/*

L5 time and space complexity analysis assignment
Duplicate in array
You have been given an integer array/list(ARR) of size N which 
contains numbers from 0 to (N - 2). Each number is present at least 
once. That is, if N = 5, the array/list constitutes values ranging from 0 to
3, and among these, there is a single integer value that is present twice. You need to find and return that duplicate number present in the array.


*/

#include <iostream>
using namespace std;

int findDuplicate(int *arr, int n)
{
    //this method here finds the total sum and n-2 elements ka sum so that when we subtract them it returns the duplicate element
      int sum = 0;
    for(int i=0; i<n; i++){
		sum += arr[i];        
    }    
    int checkSum = ( (n-1)*(n-2) ) / 2;
   	return (sum-checkSum);
}
int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findDuplicate(input, size) << endl;
	}

	return 0;
}
