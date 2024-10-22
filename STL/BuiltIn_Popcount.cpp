#include<bits/stdc++.h>
using namespace std;

int main(){

    int num = 7;
    long long num2= 1234456678965432;
    
    int cnt = __builtin_popcount(num);  //How many set bits ar there in num... in 7 the ans is 3
    long long cnt2 = __builtin_popcountll(num2);  //Used for long long
    cout<<cnt<<endl<<cnt2;
    return 0;
}