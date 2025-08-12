#include<bits/stdc++.h>
using namespace std;

// User function Template for C++

//Back-end complete function Template for C++

class Solution {
    public:
      long long solve(vector<int>& bt) {
          // code here
          int at = 0, wt = 0;
          sort(bt.begin(), bt.end());
          
          for(int i=0 ; i<bt.size(); i++){
              wt += at;   //wt should be calculated first
              at+=bt[i];
              
          }
      
      return wt/bt.size();
      }
  };

int main(){

    return 0;
}