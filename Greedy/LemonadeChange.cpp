#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      bool lemonadeChange(int N, vector<int> &bills) {
          // code here
          int five = 0, ten = 0;
          
          for(int i = 0; i < N ; i++){
              if(bills[i] == 5){
                  five += 1;
                  // return true;
              }else if (bills[i] == 10){
                  if( five > 0 ){
                      five -= 1;
                      ten += 1;
                      // return true;
                  }else return false;
              }else if(bills[i] == 20){
                  if( ten >=1 && five >=1){
                      ten --;
                      five --;
                      // return true;
                  }else if(five >=3){
                      five = five-3;
                      // return true;
                  }else return false;
              }else return false;
          }
          
          return true;
      }
  };

int main(){

    return 0;
}