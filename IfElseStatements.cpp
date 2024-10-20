#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"Enter age: ";
    cin >> age;
    if (age>18){
        if(age>25){
            cout<<"Age restricted";
        }
        cout<<"You are adult."<<endl;
    }
    else if(age=18){
        cout<<"adult as well";
    }
    else{
        cout<<"You are minor."<<endl;
    }
    return 0;
} 