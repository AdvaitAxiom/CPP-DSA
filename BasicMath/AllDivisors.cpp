#include<bits/stdc++.h>
using namespace std;

void divisors(int number){
    vector<int> div;

    for(int i=1; i<=number; i++){
        if(number % i == 0 ){
            div.push_back(i);
        }
    }
    for(const auto &p: div){
        cout<< p <<" ";
    }
}

int main(){
    int number;
    cout << "Enter the Number: "<<endl;
    cin >> number;
    divisors(number);
    return 0;
}