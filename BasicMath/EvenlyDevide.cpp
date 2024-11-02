//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int digit=0;
        int number = N;
        int counter = 0;
        while(N>0){
            digit = N%10;
            N = N/10;
            if(digit != 0 && number % digit == 0){
                counter++;
            }
        }
        return counter;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    
cout << "~" << "\n";
}
    return 0; 
}
// } Driver Code Ends