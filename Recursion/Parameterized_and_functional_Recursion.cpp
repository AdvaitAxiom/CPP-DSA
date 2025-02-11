#include<bits/stdc++.h>
using namespace std;

void parameter(int num, int sum){
    if(num<1){
        cout<<sum;
        return ;
        }
    parameter(num-1,sum+num);
}

int functional(int num){
    if(num == 0) return 0;
    return num +functional(num-1);
}

int main(){
    cout<<"Enter the number: "<<endl;
    int num;
    cin>>num;
    int sum =0;
    parameter(num,sum);
    cout<<endl<<functional(num);
    return 0;
}