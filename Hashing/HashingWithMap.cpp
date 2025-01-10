//It will solve the problem where number is 1e9
#include<bits/stdc++.h>
using namespace std;
//Maps stores value in sprted order
int main(){
    int size;
    cout<<"Enter the size of array: "<<endl;
    cin >> size;
    int arr[size];
    for(int i = 0; i<size; i++){
        cin >>arr[i];
    }

    cout<<"Enter number of Queries: "<<endl;
    int qu;
    cin >> qu;

//PreCompute-- it can be merged with the for loop to take number into the array. It can save a for loop but wont affect the TC as much because its complexity changes from N+N TO N
    map<int,int> mpp;
    for(int i = 0; i<size;i++){
        mpp[arr[i]]++;
    }

//Iterate in the map
    for(const auto it:mpp){
        cout<< it.first<<"-->"<<it.second<<endl;
    }

    while(qu--){
        int digit;
        cout<<"Enter the digit: "<<endl;
        cin >> digit;
        cout<<"The frequency is: "<<mpp[digit]<<endl;
    }
    return 0;
}

/*First pref------->>unordered_map

in map storing and fetching---> O(log n) in all cases

But in unordered map it will be --> O(1)-Best case and avg case
                                    O(N)- Worst case(Very few)
                                    
If Time limit Exceeded shows then only switch to map*/