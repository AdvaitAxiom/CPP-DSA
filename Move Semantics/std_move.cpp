#include<bits/stdc++.h>
using namespace std;

//std::move() is a function from the c++ Standard Library for casting to a rvalue reference.
// 1.move assignmnet operator
//2.move copy constructor / move constructor
//These take rvalue as reference
//So we have to convert lvalue ref to rvalue ref
//static_cast<Type&&>(obj T)

void printVector(vector<int>& v){
    cout<<"print Vector"<<endl;
    for(auto it = v.begin();it !=v.end();++it){
        cout<< *it <<" ";
    }
    cout<<endl;
}

//USING TEMPLATE 
template<typename T>
void swap(T&a, T&b){
    T tmp = move(a);
    a = move(b);
    b = move(tmp); 
}


int main(){
    vector<int> v1;
    vector<int> v2;
    for(auto i = 0; i<5; i++){
        v1.push_back(i);
    }

    for(auto i = 10; i<15; i++){
        v2.push_back(i);
    }

    printVector(v1);    //0 1 2 3 4
    printVector(v2);    //10 11 12 13 14

    //copy
    // v2=v1;
    //Instead of copying we can move
    // v2 = move(v1);

    swap(v1, v2);

    printVector(v1);    //0 1 2 3 4
    printVector(v2);    //0 1 2 3 4

    return 0;
}