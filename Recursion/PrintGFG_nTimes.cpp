//Print GFG n times
#include<bits/stdc++.h>
using namespace std;
int counting = 1;
void printGFG(int n){
    if(n<=0) return;
    if(counting>n)return;

    cout<<"GFG ";
    counting++;
    printGFG(n);
}

int main(){
    int n;
    cout<<"Number of iterations: ";
    cin>>n;
    printGFG(n);
    return 0;
}