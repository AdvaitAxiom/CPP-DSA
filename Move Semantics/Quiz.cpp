#include<bits/stdc++.h>
using namespace std;

void f(int& f){cout<<"L-Value  "<<endl;}
void f(const int& f){cout<<"Const lvalue"<<endl;}
void f(int&& f){cout<<"rvalue"<<endl;}
int main(){
    int i =10; //i->lvalue & 10 r-value

    f(i);   //L-Value 
    f(10);  //rvalue because int&& has more precedence over const int&
    f(move(i)); //rvalue 
    f(static_cast<int&&>(i));   //rvalue
    // Type-casting i explicitely to rvalue reference 
    return 0;
}