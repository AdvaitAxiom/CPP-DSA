#include<bits/stdc++.h>
using namespace std;

//Multiple print---->cout should be out of base condition
//Print once after calculating --->cout should be in base condition

//Parameterised Way/Imperative
void f(int sum,int num){
    if(num<1){
        cout<<sum;
        return;
    }
    f(sum+num,num-1);
}

//Functional Way
int func(int num){
    if(num == 0)return 0;
    return num+func(num-1); //3+func(2), func(2)=2+func(1), func(1)= 1+func(0), func(0)= return 0
    //func(1)= 1+0 =1--> func(2)=2+1 = 3, func(3)= 3+3 = 6;
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    f(0,num);
    cout<<endl<<func(num);
    return 0;
}