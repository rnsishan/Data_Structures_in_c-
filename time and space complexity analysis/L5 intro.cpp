//Lecture 5 : Time and Space Complexity Analysis
//order complexity Analysis
//theoretical Analysis

/*

note the time taken for n number of inputs
plot it

selection sort vs merge sort

merge sort faster than selection sort.
 
there are a few problems with experimental Analysis. 
as lot of processes running and
test case generation issue.as one kind of test case might be 
favourable to one of the algorithms.
always try to find worst case

BigO notation.....

we will focus on no. of unit operations and not time.
focus on the highest power
Algorithm A is called bigO of f(n) if time taken by algorithm A
for input n is <= K*f(n).
 insertion sort is O(n^2)
*/


/*
Linear search time complexity is O(n)
insertion sort time complexity is O(n^2)
best case in insertion sort time complexity is O(n)
selection sort time complexity is O(n^2)

binary search time complexity is O(logN)
{ n/2^x=1} this gives x=logN

merge sort time complexity is O(nlogn) 
recurrence relation for merge sort : T(n)=2T(n/2)+O(n)

time complexity of fibonacci code is O(2^n) . horrible
space complexity of fibonacci is 

*/

/*
space complexity

1. auxiliary/additional space pe check hota hai space complexity
2. max space req at any point of time during execution of program
3. recursion
at any point of time, the max memory required will be used for space complexity
pura sum nahi karte kabhi.

recursively
factorial ka space complexity is O(n)
binary search O(logn)
bubble sort no extra space required.
merge sort is O(n)
nth fibonacci number is O(n)



*/

/*
merge sort space complexity analysis

the fxn you working on, it creates new array, merges and copies
in the original array and deletes the created array. so max space used is 
Kn i.e. merge sort space complexity is O(n)

*/

/*
fibonacci space complexity analysis

isme take example of 4 and before any other fxn comes in usse pehele 
purane fxn jayege. like 1 returns to 2 and then 2 goes to 0 and then back to 2
so max N memory lagegi
 so space complexity for fibonacci is O(n).



*/

#include <iostream>

using namespace std;

int main()
{   //theoretical analysis
    //bubble sort is O(n^2)
    
    
    return 0;
}

