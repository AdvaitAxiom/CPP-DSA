#include<bits/stdc++.h>
using namespace std;
class A{
    public: 
    A(){cout<<"Default Constructor"<< endl;}
    A(const A&){cout<<"Copy Constructor"<<endl;}
    A(const A&&){cout<<"Move Constructor"<<endl;}
};
int main(){
    A a;    //Default constructor is called
    A b = a;    //Copy constructor
    A c = move(a);  //Move constructor
    A d(c); //Copy constructor
    return 0;
}