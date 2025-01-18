class Solution {
public:
    int maxFrequency(vector <int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int counter = k;
        int max_element = 0;
        map<int, int> mpp;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] != nums[i + 1] && counter != 0) {
                nums[i]++;
                counter -= 1;
            } else if (nums[i] == nums[i + 1] && counter != 0) {
                nums[i + 1]++;
                counter -= 1;
            } else {
                mpp[nums[i]]++;
            }
        }
        for (auto lt : mpp) {
            max_element = max(max_element, lt.second);
        }
        return max_element;
    }
};