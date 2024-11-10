//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    // void reverseArray(vector<int> &arr) {
    //     // code here
    //     vector<int>::iterator it;
    //     for(it = arr.end(); it!=arr.begin();it--){
    //         cout<<*it<<" ";
    //     }
        
    // }

  void reverseArray(vector<int> &arr) {
        // code here
        int start = 0;
        int size = arr.size();
        if(start<=size/2) return;
        swap(arr[start],arr[size-start-1]);
        start++;
        size--;
        reverseArray(arr);
        
        }

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        reverseArray(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends