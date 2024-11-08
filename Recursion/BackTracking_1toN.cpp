#include<bits/stdc++.h>
using namespace std;

//Printing is done after the inner function returns
void f(int i, int n){
    if(i<1)return;
    f(i-1,n);
    cout<<i<<" ";
}
int main(){
    int number;
    cout<<"Enter the number: ";
    cin>> number;
    f(number,number);
    return 0;
}