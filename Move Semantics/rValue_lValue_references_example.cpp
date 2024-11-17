#include<bits/stdc++.h>
using namespace std;
void f(int& i){cout<<"L-Value f"<<endl;}
void f(int&& i){cout<<"R-Value f"<<endl;}
int main(){
    
    int i =10; //i->lvalue & 10 r-value

    f(i);   //L-Value f
    f(10);  //R-Value f
    f(move(i)); //R-Value f
    //It takes an l-value and convrts it to r-value
    return 0;
}