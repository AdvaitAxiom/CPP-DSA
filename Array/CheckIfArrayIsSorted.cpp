#include<bits/stdc++.h>
using namespace std;

bool ifSorted(int arr[], int size){

    for(int i = 1; i<size;i++){
        if(arr[i]>=arr[i-1]){
            continue;
        }else{
            return false;
        }
    }
    return true;
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
    if(ifSorted(arr,size)== true){
        cout<<"Array is sorted"<<endl;
    }else{
        cout<<"Array is unsorted."<<endl;
    }
    return 0;
}