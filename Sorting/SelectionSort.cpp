#include<bits/stdc++.h>
using namespace std;

//SELECTION SORT--->>(SELECT MIN & SWAP)
//1. let take the first element as min element
//2. take another pointer and compare it with other elements
//3. if any element occurs with value less than the min element, swap
//4. redo from 1 discarting the first element(because it is sorted) 


//Increasing Order(To make it in decreasing order ---->  if(arr[minIndex]<arr[j]))
void selection_sort(int arr[], int size){

    //The comaprison will be from the 0th index to the second last index(no need to sort the last 1 element)
    for(int i = 0; i<=size-2;i++){
        int minIndex = i;   //Let the first index element is min(in every iteration)
        //Comparing with every element to get the min element
        for(int j = i; j<=size-1;j++){
            if(arr[minIndex]>arr[j]){
                minIndex = j;   //address of min element has changed
            }
        }
        //Swap
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;

    }

}

int main(){
    int size;
    cout<<"Enter Size of the Array: ";
    cin>>size;
    
    int arr[size];

    cout<<"Enter Elements: "<<endl;
    for(int i= 0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Array is: "<<endl;
    for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }

    selection_sort(arr,size);

    cout<<endl<<"Sorted Array is: "<<endl;
    for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}