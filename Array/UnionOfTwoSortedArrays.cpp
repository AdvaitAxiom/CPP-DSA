#include<bits/stdc++.h>
using namespace std;

//UNION USING MAP
vector<int> doUnionMap(vector<int> &arr1,vector<int> &arr2){
    int arr1Size = arr1.size();
    int arr2Size = arr2.size();

    map <int,int> mpp;
    vector<int> result;

    for(int i = 0; i<arr1Size;i++){
        mpp[arr1[i]]++;
    }
    for(int i = 0; i<arr2Size;i++){
        mpp[arr2[i]]++;
    }

    for(auto it: mpp){
        result.push_back(it.first);
    }
    return result;
}

//UNION USING SET
vector<int> doUnionSet(vector<int> &arr1,vector<int> &arr2){
    int arr1Size = arr1.size();
    int arr2Size = arr2.size();

    set <int> st;
    vector<int> result;

    for(int i = 0; i<arr1Size;i++){
        st.insert(arr1[i]);
    }
    for(int i = 0; i<arr2Size;i++){
        st.insert(arr2[i]);
    }

    for(auto it: st){
        result.push_back(it);
    }
    return result;
}

//UNION USING TWO POINTERS
vector <int> doUnionTwoPointer(vector <int> &arr1, vector<int> &arr2){

}
int main(){
    vector <int> arr1;
    vector <int> arr2;
    int val;
    cout<<"Enter array 1 elements: "<<endl;
    while(true){
        cin>>val;
        if(val ==-1) break;
        arr1.push_back(val);
    }
    cout<<"Enter array 2 elements: "<<endl;
    while(true){
        cin>>val;
        if(val ==-1) break;
        arr2.push_back(val);
    }

    vector<int> final = doUnionMap(arr1,arr2);
    vector<int> final = doUnionSet(arr1,arr2);
    vector<int> final = doUnionTwoPointer(arr1,arr2);

    cout<<endl;
    for(auto it: final){
        cout<<it<<" ";
    }
    return 0;
}