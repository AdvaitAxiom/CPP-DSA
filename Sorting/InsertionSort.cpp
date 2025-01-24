#include<bits/stdc++.h>
using namespace std;

//INSERTION SORT-->Takes an element and places it in its correct position

//14,9,15,12,6,8,13

//Iteration 1: 
    //Assume array has only 1st element(array-->14)
        //Then 14 is in right place
//Iteration 2: 
    //Assume array has first 2 elements(array-->14,9)
        //Then 14 is not in the right position
            //Swap
            //Array-->9,14,15,12,6,8,13

//Iteration 3:
    //And so on-->


// Pattern--> for array 9,14,15,12[in case of iteration 3]
    //12-swap left until it cant be swapped anymore
    //1st swap: 9,14,12,15
    //2nd swap: 9,12,14,15
    //3rd swap: it cant be swapped with 9 anymore
    //So array is sorted



void insertion_sort(int arr[],int size){
    for(int i = 0; i<=size-1;i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
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

    insertion_sort(arr,size);

    cout<<endl<<"Sorted Array is: "<<endl;
    for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}