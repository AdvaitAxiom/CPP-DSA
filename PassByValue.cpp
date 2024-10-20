#include<bits/stdc++.h>
using namespace std;

void doSomething(int num){
    cout<<num<<endl;
    num+=10;
    cout<<num<<endl;
    num+=10;
    cout<<num<<endl;
}

int main(){
    int num=10;
    doSomething(num);
    cout<<num<<endl;//passed by value so the original was copied
    return 0;
}