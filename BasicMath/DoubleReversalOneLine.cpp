#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    bool isSameAfterReversals(int num) {
       return (num == 0 ) || (num % 10 != 0);
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
