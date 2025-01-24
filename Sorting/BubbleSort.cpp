#include<bits/stdc++.h>
using namespace std;

// BUBBLE SORT--->Push the max element to the last by adjacent swaps

//Opposite of Selection Sort

//13,46,24,52,20,9

//1st Iteration-->(Adjacent swaps)
        //Step 1: 13,46 compare--> sorted
        //Step 2: 46,24 compare--> unsorted-->swap--> 13,24,46,52,20,9
        //Step 3: 46,52 compare--> sorted
        //Step 5: 52,20 compare--> unsorted-->swap-->13,24,46,20,52,9
        //Step 6: 52, 9 comapre--> unsorted-->swap-->13,24,46,20,9,52

        //OUTPUT- 13,24,46,20,9,52(HIGHEST ELEMENT IS AT THE LAST=52)
//2nd Iteration--> considered Array--> 13,24,46,20,9 [last ele is discarted as it is highest and sorted]
        //Redo adjacent compare and swaps 

//n-size of array
//1st iteration--> 0-(n-1)
//2nd iteration--> 0-(n-2)
//3rd iteration--> 0-(n-3)
//4th iteration--> 0-(n-4)
//5th iteration--> 0-(n-5)

void bubble_sort(int arr[],int size){
        for(int i = size-1; i>=0;i--){
                for(int j = 0; j<=i-1;j++){
                        if(arr[j]>arr[j+1]){
                                int temp =arr[j];
                                arr[j] = arr[j+1];
                                arr[j+1] = temp;
                        }
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

    bubble_sort(arr,size);

    cout<<endl<<"Sorted Array is: "<<endl;
    for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    return 0;
}