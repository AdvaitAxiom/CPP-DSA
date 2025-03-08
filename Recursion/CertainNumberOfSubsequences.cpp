// PRINTING SUBSEQUENCES WHOSE SUM IS K
#include<bits/stdc++.h>
using namespace std;

//RIGHT WAY
int printSS(int ind, int s, int sum,int arr[], int n){
    
    //Condition not satisfied(Strictly done if array contains positives only)
    if(s>sum) return 0;
    if(ind ==n){
        if(s == sum ){
            return 1;
        }
        else return 0;
    }
    //pick
    s += arr[ind];
    int l =printSS(ind+1,s, sum,arr, n);
    s-=arr[ind];

    //not pick
    int r=printSS(ind+1,s,sum,arr, n) == true;
    return l+r;
}
int main(){
    int arr[] = {1,2,1};
    int n =3;
    int sum = 2;
    cout<< printSS(0,0,sum,arr,n);
    return 0;
}