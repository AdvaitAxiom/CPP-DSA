#include<bits/stdc++.h>
using namespace std;

//REMOVING DUPLICATES FROM SORTED ARRAY

//Using Unique and Erase--> O(n)
void removeDup(int arr[], int size){
    vector<int> vec3(arr,arr+size);
    vec3.erase(unique(vec3.begin(),vec3.end()),vec3.end()); //This rearranges the vector so that each unique (non-duplicate consecutive) element appears once at the front.It returns an iterator to the new logical end of the vector (i.e., where the duplicates start).

    for(auto i3: vec3){
        cout<< i3<<" ";
    }
}

//Using normal iterator
void removeDup2(int arr[], int size)
    vector <int> vec(arr,arr+size);
    // vector <int> vec;
    // vec.assign(arr,arr+size);

    for(int i = 0; i< vec.size()-1; i++){
        if(vec[i] == vec[i+1]){
            vec.erase(vec.begin()+i);
        }
    }

    for(auto it: vec){
        cout<< it<<" ";
    }

} 

//Using set-->O(n log n)
void removeDup3(int arr[], int size){
    vector<int> vec2(arr,arr+size);
    set<int> st(vec2.begin(),vec2.end());
    vec2.assign(st.begin(),st.end());

    for(auto i2: vec2){
        cout<< i2<<" ";
    }
}

//Using unordered_map-->O(n)
void removeDup4(int arr[], int size){
    vector<int> vec1(arr,arr+size);
    unordered_map<int ,bool> seen;
    vector <int> uni;

    for(int it: vec1){
        if(!seen[it]){
            uni.push_back(it);
            seen[it] = true;
        }
    }

    for(auto i4: uni){
        cout<< i4<<" ";
    }
}


int main(){
    int size;
    cout << "Enter the size of the array:";
    cin >> size;

    int arr[size];
    cout << "Enter the elements:";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    removeDup(arr,size);
    removeDup2(arr,size);
    removeDup3(arr,size);
    removeDup4(arr,size);
    return 0;
}