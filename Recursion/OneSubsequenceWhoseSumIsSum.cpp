// PRINTING SUBSEQUENCES WHOSE SUM IS K
#include<bits/stdc++.h>
using namespace std;

//Using global variable(NOT RECOMENDED)
bool flag = false;
void printS(int ind, vector<int> &ds, int s, int sum,int arr[], int n){
    if(ind ==n){
        if(s == sum && flag ==false){
            flag = true;
            for(auto it : ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    //pick
    ds.push_back(arr[ind]);
    s += arr[ind];
    printS(ind+1, ds,s, sum,arr, n);
    s-=arr[ind];
    ds.pop_back();

    //not pick
     printS(ind+1, ds,s, sum,arr, n);

}

//RIGHT WAY
bool printSS(int ind, vector<int> &ds, int s, int sum,int arr[], int n){
    if(ind ==n){
        if(s == sum ){
            for(auto it : ds){
                cout<<it<<" ";
            }
            cout<<endl;
            return true;
        }
        else return false;
    }
    //pick
    ds.push_back(arr[ind]);
    s += arr[ind];
    if(printSS(ind+1, ds,s, sum,arr, n)==true){
        return true;
    }
    s-=arr[ind];
    ds.pop_back();

    //not pick
     if(printSS(ind+1, ds,s, sum,arr, n) == true){
        return true;
     }
    return false;
}
int main(){
    int arr[] = {1,2,1};
    int n =3;
    int sum = 2;
    vector<int> ds;
    printSS(0,ds,0,sum,arr,n);
    return 0;
}