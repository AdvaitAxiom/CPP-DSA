#include<bits/stdc++.h>
using namespace std;


/*
arr[]= {1,2,3,4,5,6,7} d(no. of rotation)=7  N=no. of elements in array

7 rotation = same place
8 rotation = 7+1 = 1 rotation
15 rotation = 7+7+1 = 1 rotation
multiple of N is = 0 rotation
 
So net rotation = d%N

USING TEMP ARRAY----------------------------------------->>>>>>>>>>

arr[]= {1,2,3,4,5,6,7} d=3

1.temp[] = [1,2,3] (because d = 3)  [O(d)]

    for(i=0;i<d;i++){
        temp.push_back(arr[i]);
    }

2.shifting i th element to (i-d)th position     [O[size-d]]
    3rd ele--->(3-3)=0 th pos
    4ht ele--> (4-3)=1 st pos

    for(i=d;i<n;i++){
        arr[i-d] = arr[i]
    }

3.Put back the temp to the arr      [O(d)]
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

    Time Complexity---> O(d)+O(size-d)+O(d) = O(n+d)
    Extra space ---> O(d)

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



/*
OPTIMAL APPROACH------------------------------------>>>>>>>>>>>>>>>>>>>>>>> 
arr[]= {1,2,3,4,5,6,7} d(no. of rotation)=3  N=no. of elements in array

d = 3 so the first 3 elements = 1,2,3

1.Reverse first half = 3,2,1        [O(d)]
    reverse(arr, arr+d)
2. Reverse second half = 7,6,5,4        [O(size-d)]
    reverse(arr+d,arr+n)
3. reverse the whole = 4,5,6,7,1,2,3        [O(size)]
    reverse(arr, arr+size)

    TOTAL TIME COMPLEXITY - O(2n)
    SPACE COMPLEXITY - 0(1)
*/

void leftRotate(int arr[],int size, int d){
    reverse(arr,arr+d);
    reverse(arr+d, arr+size);
    reverse(arr, arr+size);
}
void rightrotate(int arr[],int size, int d){
        reverse(arr,arr+(size-d));
        reverse(arr+(size-d), arr+size);
        reverse(arr,arr+size);
}
int main(){
    int size;
    cout<<"Enter size: "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter array ele: "<<endl;
    for(int i = 0 ;i<size;i++){
        cin>>arr[i];
    }

    int d;
    cout<<"Enter d amount: "<<endl;
    cin>>d;
    // leftrotate(arr,size,d);
    // leftRotate(arr,size,d);
    rightrotate(arr,size,d);
    for(int i = 0;i<size;i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}