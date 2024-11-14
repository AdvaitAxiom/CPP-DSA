#include<bits/stdc++.h>
using namespace std;
class A{
    int *p;
    public: 
    A(){
        p = new int[100];
        cout<<"Default Constructor"<< endl;
    }
    A(const A& aobj){
        p = new int[100];
        //copy everything fromaobj to *this
        for(auto i =0;i<100;++i){
            p[i] = aobj.p[i];
        }
        cout<<"Copy Constructor"<<endl;}
    A(const A&& obj):p(obj.p){cout<<"Move Constructor"<<endl;}
};
int main(){
    A a;    //Default constructor is called
    A b = a;    //Copy constructor
    A c = move(a);  //Move constructor
    A d(c); //Copy constructor
    return 0;
}