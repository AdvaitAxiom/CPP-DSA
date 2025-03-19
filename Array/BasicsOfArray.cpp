#include<bits/stdc++.h>
using namespace std;
int arr2[6];
int main(){
    int arr[6];
    for(auto it:arr){
    cout<<it<<" ";  //Will return some garbage value
    }
    cout<<endl;
    for(auto it:arr2){
    cout<<it<<" ";  //Will return 0 values because it was decalred globally
    }
    return 0;
}

//Max size of array [10^6](within main method)
//Max size of array [10^7](globally) 

//https://chatgpt.com/share/67dac10f-3a74-8002-91f6-d85bcb415730