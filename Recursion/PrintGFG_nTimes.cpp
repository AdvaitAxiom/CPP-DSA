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
//TC->O(n)
//Space complexity is the stack space. O(n)
//Without using Global Variable
void f(int i, int n){
    if(i<=0 || i>n)return;
    cout<<"Alapan ";
    f(i+1,n);
}

//Passing 1 argument
void f2(int n){
    if(n<=0)return;
    cout<<"IT ";
    f2(n-1);
}

int main(){
    int n;
    cout<<"Number of iterations: ";
    cin>>n;
    printGFG(n);
    cout<<endl;
    f(1,n);
    cout<<endl;
    f2(n);
    return 0;
}