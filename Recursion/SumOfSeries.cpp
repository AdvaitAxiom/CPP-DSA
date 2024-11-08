#include<bits/stdc++.h>
using namespace std;

long long sumOfSeries(long long n) {
        // code here
        if(n==0)return 0;
        return n*n*n+sumOfSeries(n-1);  //pow(n,3)--->The pow function computes the result as a floating-point number, even if the input is an integer
        
    }
int main(){
    long long int n;
    cout<<"Number of iterations: ";
    cin>>n;
    cout<<"Ans is: "<<sumOfSeries(n);
    return 0;
}