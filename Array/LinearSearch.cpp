#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int>& nums, int target) {
    //your code goes here

    for(int i = 0; i<nums.size();i++){
        if(nums[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> nums = {10, 20, 30, 40, 50};
    int target = 30;

    int result = linearSearch(nums, target);

    if(result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}