#include<bits/stdc++.h>
using namespace std;
//Acepts the negative integers
void printGFG(int n){
    if(n==0)return;
    cout<<n<<" ";
    if(n<0)printGFG(n+1);
    if(n>0)printGFG(n-1);
}
//Accpets only pos integers
void printGFGpos(int n){
    if(n<=0)return;
    cout<<n<<" ";
    printGFG(n-1);
}

int main(){
    int n;
    cout<<"Number of iterations: ";
    cin>>n;
    printGFGpos(n);
    printGFG(-n);
    return 0;
}