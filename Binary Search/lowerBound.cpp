class Solution{
    public:
// Input:  arr[] = [2, 3, 7, 10, 11, 11, 25], target = 9
// Output: 3
// Explanation: 3 is the smallest index in arr[] where element (arr[3] = 10) is greater than or equal to 9.
        int lowerBound(vector<int> &nums, int x){
            int size = nums.size();
            int high = size-1;
            int low = 0;
            int mid = 0;
            int ans = size;
            while(low<=high){
                mid = (high+low)/2;
                 if(nums[mid]>= x){
                    ans = mid;
                    high = mid -1;
                 }else{
                    low = mid+1;
                 }
            }
            return ans;
        }
    };