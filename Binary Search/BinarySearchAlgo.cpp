#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int low = 0, high = nums.size()-1, mid = 0;
    
            while(low <= high){
                mid = (high+low)/2;
                if(nums[mid] == target) return mid;
                else if(nums[mid]<target){
                    low = mid+1;
                }else{
                    high = mid-1;
                }
            }
            return -1;
        }
    };

int main(){

    return 0;
}