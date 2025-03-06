// PRINTING SUBSEQUENCES WHOSE SUM IS K
#include<bits/stdc++.h>
using namespace std;
//PSEUDO CODE
/*f(index,arr,sum){
    if(index ==n){
        print(ds)
    return;
    }
    ds.add(arr[i]);--> pick
    sum += arr[i];
    f(index+1,arr,sum);
    ds.remove(arr[i]);
    s -= arr[i];

    f(i+1,arr,sum);--> not pick
}*/
void printS(int ind, vector<int> &ds, int s, int sum,int arr[], int n){
    if(ind ==n){
        if(s == sum){
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

int main(){
    int arr[] = {1,2,1};
    int n =3;
    int sum = 2;
    vector<int> ds;
    printS(0,ds,0,sum,arr,n);
    return 0;
}