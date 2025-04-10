#include<bits/stdc++.h>
using namespace std;

void rotateLeft(vector<int>&arr){
    int first = arr[0];

    for(int i = 0; i<arr.size()-1; i++ ){
        arr[i] = arr[i+1];
    }
    arr.pop_back();
    arr.push_back(first);
}
int main(){
    vector<int> arr;
    int val;
    cout<<"Enter the elements & -1 to stop: ";
    while(true){
        cin>>val;
        if(val == -1) break;
        arr.push_back(val);
    }

    rotateLeft(arr);

    for(auto it: arr){
        cout<< it <<" ";
    }
    return 0;
}