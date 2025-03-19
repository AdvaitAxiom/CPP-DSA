#include<bits/stdc++.h>
using namespace std;

//BRUTE FORCE
//1.Sort the array
//2. Take the last element as the largest element

//Time Complexity: O(nlogn)
//Space Complexity: O(1)

//OPTIMAL
//1. Take the first element as the largest element in a variable
//2. Iterate a loop and compare it with another elements
//3. If any larger element is found then update the largest value

//Time Complexity: O(n)
//Space Complexity: O(1)

void largeele(int arr[], int size){
    int largest = arr[0];

    for(int i = 1;i<size;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"Largest element is:"<<largest;
}
int main(){
    int size;
    cout<<"Enter the size of the array:";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements:";

    for(int i=0;i<size;i++){
        cin>> arr[i];
    }

    largeele(arr,size);
    return 0;
}