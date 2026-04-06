#include<bits/stdc++.h>
using namespace std;

void names(int n){
    cout<<"Alapan\n";
    if( n==1)return;
    names(n-1);
}
int main(){
    cout<<"Enter the number of names: ";
    int n;
    cin>>n;
    names(n);

    return 0;
}