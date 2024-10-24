#include<bits/stdc++.h>
using namespace std;

int main(){

    int num;
    cout<< " Enter the number: "<<endl;
    cin >> num;
    int counter = 0;
    while(num>0){

        int last_digit = num % 10;
        num = num/10;
        counter ++;
    }

    cout<< "The number of digits: "<<counter;
    return 0;
}