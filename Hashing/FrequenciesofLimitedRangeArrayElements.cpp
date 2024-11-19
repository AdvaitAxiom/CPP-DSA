//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        vector<int> vec={0};
        map<int, int> mpp;
        
        for(int i = 0; i<arr.size();i++){
            mpp[arr[i]]++;
        }
        
        for(auto it:mpp){
            vec.push_back(it.second);
        }
        return vec;
    }

//{ Driver Code Starts.

int main() {
   int size;
    cout<<"Enter the size of array: "<<endl;
    cin >> size;
    vector <int> arr;
    for(int i = 0; i<size; i++){
        cin >>arr[i];
    }
    vector<int>result=frequencyCount(arr);
    for(auto lt: result){
        cout<<lt<<" ";
    }

    return 0;
}

// } Driver Code Ends