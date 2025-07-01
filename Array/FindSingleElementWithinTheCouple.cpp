#include<bits/stdc++.h>
using namespace std;

int getSingleElement(vector <int> nums){
    int xor1 = 0;

    for(int i = 0; i<nums.size();i++){
        xor1 ^= nums[i];  
    }
    return xor1;
}

int main(){
    vector<int> arr = {4, 1, 2, 1, 2};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}

//TIME COMPLEXITY-->O(N)    N= Size of the array
//SPACE COMPLEXITY-->O(1)