#include<bits/stdc++.h>
using namespace std;

void doSomething(int &num){//Here using & to pass the ref of the original value
    cout<<num<<endl;
    num+=10;
    cout<<num<<endl;
    num+=10;
    cout<<num<<endl;
}

int main(){
    int num=10;
    doSomething(num);
    cout<<num<<endl;//passed by ref so the original is changed
    return 0;
}