#include<bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cout<<"Enter age: "<<endl;
    cin>>age;

    if(age<21){
        cout<<"Not applicable"<<endl;
    }
    else if (age<55){
        cout<<"You are eligible "<<endl;
        if(age>=50){
            cout<<"Retirement soon!!!"<<endl;
        }    
    }
    else{
        cout<<"Retired"<<endl;
    }

    return 0;
}