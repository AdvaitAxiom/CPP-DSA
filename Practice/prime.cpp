#include<bits/stdc++.h>
using namespace std;

bool prime(int num){
    int counter =0;
    for(int i = 1; i<=sqrt(num);i++){
        if(num % i ==0 && num/i !=i){
            counter ++;
        }
        if(counter>2)break;
    }
    if(counter == true) return true;
    else return false;
}

int main(){
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;

    cout<<prime(num);
    return 0;
}