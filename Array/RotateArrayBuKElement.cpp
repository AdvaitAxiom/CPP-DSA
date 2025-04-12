#include<bits/stdc++.h>
using namespace std;


/*
arr[]= {1,2,3,4,5,6,7} d(no. of rotation)=7  N=no. of elements in array

7 rotation = same place
8 rotation = 7+1 = 1 rotation
15 rotation = 7+7+1 = 1 rotation
multiple of N is = 0 rotation
 
So net rotation = d%N

USING TEMP ARRAY----------------------------------------->>

arr[]= {1,2,3,4,5,6,7} d=3

1.temp[] = [1,2,3] (because d = 3)

    for(i=0;i<d;i++){
        temp.push_back(arr[i]);
    }

2.shifting i th element to (i-d)th position
    3rd ele--->(3-3)=0 th pos
    4ht ele--> (4-3)=1 st pos

    for(i=d;i<n;i++){
        arr[i-d] = arr[i]
    }

3.Put back the temp to the arr
    from which index---> (n-d) (7-3= 4 th index)

    int j =0;
    for(i = n-d; i<n;i++){
        a[i] = temp[j];     //j to iterate ele in temp array
        j++;
    }

    OR,

    temp[] = [1,2,3]
              0,1,2
    arr[] = [4,5,6,7,_,_,_] (n-d)+0, (n-d)+1, (n-d)+2 [index] [0,1,2 are of temp[] index

    for(i = n-d; i<n; i++){
        a[i] = temp[i-(n-d)]        //if i=4 then 4-(7-3) = 0 means in 4th index of arr will be placed with the 0th index of temp[] 
    }

*/

void leftrotate(int arr[],int size, int d){
    d = d%size;

    //Creating temp array
    int temp[d];

    //1.Pushing the subpart of array to the temp array
    for(int i = 0; i<d;i++){
        temp[i] = arr[i];
    }
    
    //2.Shifting
    for(int i = d; i<size;i++){
        arr[i-d] = arr[i];
    }
    //3.Put back temp ele into arr
    for(int i = size-d;i<size; i++)
        arr[i] = temp[i-(size-d)];
    }
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i = 0 ;i<size;i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    leftrotate(arr,size,d);
    for(int i = 0;i<size;i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}