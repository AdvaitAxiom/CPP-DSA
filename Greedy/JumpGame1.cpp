#include<bits/stdc++.h>
using namespace std;

//Given a array of positive integers arr, where each element denotes the maximum length of jump you can cover. Find out if you can make it to the last index starting from the first index of the list, return true if you can reach the last index.

//Input: arr = [1, 2, 0, 3, 0, 0] 
//Output: true
//Explanation: Jump 1 step from first index to second index. Then jump 2 steps to reach 4th index, and now jump 2 steps to reach the end.
class Solution {
    public:
      // Function to check if we can reach the last index from 0th index.
      bool canReach(vector<int> &arr) {
          // code here
          int maxval = 0;
          for(int i = 0 ; i < arr.size() ; i++){
              if(i>maxval) return false;
              maxval = max(arr[i]+i,maxval);
          }
          return true;
      }
  };

int main(){

    return 0;
}