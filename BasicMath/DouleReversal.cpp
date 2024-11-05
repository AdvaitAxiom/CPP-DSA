#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
     int reverse(int x) {
        int ans = 0; // Initialize the reversed number to 0
        while (x != 0) {
            int digit = x % 10; // Get the last digit of x
            
            // Check for overflow/underflow before updating ans
            if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10)) {
                return 0; // Return 0 if reversing x would cause overflow/underflow
            }
            
            ans = ans * 10 + digit; // Append the digit to the reversed number
            x = x / 10; // Remove the last digit from x
        }
        return ans; // Return the reversed number
    }
    bool isSameAfterReversals(int num) {
        int original_num = num;
        int first_reverse = reverse(num);
        int second_reverse = reverse(first_reverse);
        return original_num == second_reverse;
    }
};

int main() {
    Solution solution;
    int x;
    cout <<"Enter the number: "<<endl;
    cin >> x;
    cout << solution.isSameAfterReversals(x) << std::endl;
    return 0;
}
