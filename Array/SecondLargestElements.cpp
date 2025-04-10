#include<bits/stdc++.h>
using namespace std;

//BRUTEFORCE
//1.Sort    (NlogN)
//2. Store the last ele at a variable(largest)
//2. compare from 2nd last element and check if it not same as the largest

//Pseudo Code
// for(i = n-2; i>=0;i--){
//     if(arr[i] != largest){
//         secondLargest = arr[i];
//         break;
//     }
// }

//Worst Case (O(N))--->
//Case 1 : 1 7 7 7 7    (Second largest at first)
//Cse 2 : 7 7 7 7 7     (No 2nd largest)


//BETTER APPROACH
//1.find the largest element of the array(O(n))
//2. set a variable for second largest with value -1
//3. loop and check each element if(arr[i]>second largest && arr[i] != largest)
//4. if condition satisfies then second largest = arr[i]

//Time complexity --> O(n)+ O(n) = O(2n)


//OPTIMAL APPROACH(Assume that there is no neg number)
//1. largest = arr[0] , slargest = -1
//2. iterate
//3. if i >largest then slargest = largest and largest = new value
//4. if i<largest then compare with slargest and update it.

//Time complexity--> O(n)
int secondlargest(int arr[], int size){

    int largest = arr[0];
    int slargest = -1;

    for(int i = 1; i<size; i++){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i]; 
        }else if(arr[i]<largest && arr[i]>slargest){
            slargest = arr[i];
        }
    }
    return slargest;
}

int secondsmallest(int arr[], int size){

    int smallest = arr[0];
    int  ssmallest = INT_MAX;
    
    for(int i = 1; i<size; i++){
        if(arr[i]<smallest){
            ssmallest = smallest;
            smallest = arr[i]; 
        }else if(arr[i]>smallest && arr[i]<ssmallest){
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}
void slargeele(int arr[], int size){
    int slargest = secondlargest(arr,size);
    int smallest = secondsmallest(arr,size);

    cout<< slargest<<" "<<smallest;
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

    slargeele(arr,size);
    return 0;
}