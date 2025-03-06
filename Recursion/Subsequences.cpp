//Subsequences--> Contiguous / non-contiguous order that follows the order
//arr[3,1,2]--> Subsequences are--> [ ],[3],[1],[2],[3,1],[1,2],[3,2],[3,1,2]
//[3,2]-->non-contiguous
//Subarray is also a Subsequence
/*
f(index,[]){
    if(index>=n)
        print([])
        return;

    ***TAKING AN ELEMENT***
    [].add(arr[i]);
    f(index+1,[]);
    [].remove(arr[i]);

    ***NOT TAKING AN ELEMENT***
    f(ind+1,[]);
}
*/

#include<bits/stdc++.h>
using namespace std;

void printSubseq(int ind, vector<int> &ds, int arr[], int n){
if(ind == n){
    for(auto it:ds){
        cout<< it <<" ";
    }
    if(ds.size() == 0){
        cout<<"{}";
    }
    cout<< endl;
    return;
}

//not pick or not take condition, this element is not added to the subsequence
printSubseq(ind+1, ds, arr,n);

//take or pick the particular index into the subsequence
ds.push_back(arr[ind]);
printSubseq(ind+1, ds,arr, n);
ds.pop_back();
}

int main(){
    int arr[] = {3,1,2};
    int n = 3;
    vector<int> ds;
    printSubseq(0,ds,arr,n);
    return 0;
}

//TIME COMPLEXITY--- FOR EVERY ELEMENT WE HAVE TWO OPTIONS 
//O(2^N X N) (FOR PRINTING USING LOOP N)

//SPACE COMPLEXITY---> MAX CAN GO TILL INDEX 2
//O(N)