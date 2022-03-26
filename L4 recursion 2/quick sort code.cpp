//QUICK SORT
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int partition(int input[], int s, int e){
    int pivot = input[s], count = 0;
    for(int i=s+1; i<=e; i++){
        if(input[i] <= pivot){
            count++;
        }
    }
    int pivotIndex = s + count;
    swap(input[s], input[pivotIndex]);

    //partitioning

    int i=s, j=e;
    while(i<pivotIndex && j>pivotIndex){
        if(input[i] <= pivot){
            i++; 
        }
        else if(input[j] > pivot){
            j--; 
        }
        else{
            swap(input[i], input[j]);
            i++, j--;
        }
    }
    return pivotIndex;
}
void quickSortHelper(int input[], int s, int e){
    if(s >= e) return;
    else{
        int pivot = partition(input, s, e);
        quickSortHelper(input, s, pivot-1);
        quickSortHelper(input, pivot+1, e);
    }
}
void quickSort(int input[], int size) {

    quickSortHelper(input,  0, size-1);
}
int main(){

  int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}
