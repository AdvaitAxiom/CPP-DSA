//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

//You are given an array arr[] containing positive integers. The elements in the array arr[] range from 1 to n (where n is the size of the array), and some numbers may be repeated or absent. Your task is to count the frequency of all numbers in the range 1 to n and return an array of size n such that result[i] represents the frequency of the number i (1-based indexing).

// } Driver Code Ends
class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        vector<int> vec(arr.size(),0);
        // map<int,int> mpp;
        
        for(int i = 0 ; i<arr.size();i++){
             // if (arr[i] >= 1 && arr[i] <= arr.size()) {
            vec[arr[i] - 1]++;
        //}
        }
        
        // for(auto lt:mpp){
        //     vec.push_back(lt.second);
        // }
        
        return vec;
    }



//{ Driver Code Starts.

int main() {
    int t; // Number of test cases
    cin >> t;
    cin.ignore(); // Ignore the newline after the integer input
    while (t--) {
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num); // Read the array elements from input string

        Solution obj;
        vector<int> result = obj.frequencyCount(a);

        // Print the result in the required format
        if (result.empty()) {
            cout << "[]"; // Print empty brackets if no duplicates are found
        } else {
            for (int i = 0; i < result.size(); i++) {
                if (i != 0)
                    cout << " ";
                cout << result[i];
            }
        }
        cout << endl; // Ensure new line after each test case output
    }

    return 0;
}

// } Driver Code Ends