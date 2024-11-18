//It will solve the problem where number is 1e9
#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of array: "<<endl;
    cin >> size;
    int arr[size];
    for(int i = 0; i<size; i++){
        cin >>arr[i];
    }

    cout<<"Enter number of Queries: "<<endl;
    int qu;
    cin >> qu;

//PreCompute
    map<int,int> mpp;
    for(int i = 0; i<size;i++){
        mpp[arr[i]]++;
    }

    while(qu--){
        int digit;
        cout<<"Enter the digit: "<<endl;
        cin >> digit;
        cout<<"The frequency is: "<<mpp[digit]<<endl;
    }
    return 0;
}