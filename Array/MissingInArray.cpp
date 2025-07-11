// You are given an array arr[] of size n - 1 that contains distinct integers in the range from 1 to n (inclusive). This array represents a permutation of the integers from 1 to n with one element missing. Your task is to identify and return the missing element.

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int missingNum(vector<int>& arr) {
          // code here
          int size = arr.size()+1;
          long long total = 0;
          long long req = (1LL*size*(size+1))/2;        //Here we multiplying int with int.So before assigning to the long long variable for result it can overflow(Exceeding 32 bit integer). So to avoid overflow we are using 1LL to make it long long.
          /*
          The number 1 as a long long literal, i.e., a 64-bit integer constant.
            | Literal | Type                 |
            | ------- | -------------------- |
            | `1`     | `int`                |
            | `1L`    | `long`               |
            | `1LL`   | `long long` (64-bit) |
            | `1ULL`  | `unsigned long long` |
          */
          
          for(auto it: arr){
              total+=it;
          }
          
          return (int)(req - total);
      }
  };

int main(){

    return 0;
}