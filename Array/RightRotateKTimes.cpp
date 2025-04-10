#include<bits/stdc++.h>
using namespace std;

void rotateLeft(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;
    while (k--) {
        int last = nums.back();
        nums.pop_back();
        nums.insert(nums.begin(), last);
    }
}
int main(){
    vector<int> arr;
    int val,k;
    cout<<"Enter the elements & -1 to stop: ";
    while(true){
        cin>>val;
        if(val == -1) break;
        arr.push_back(val);
    }
    cout<<"How many times to rotate?"<<endl;
    cin>>k;
    rotateLeft(arr,k);

    for(auto it: arr){
        cout<< it <<" ";
    }
    return 0;
}