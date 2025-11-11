#include<bits/stdc++.h>
using namespace std;

void divisors(int number){
    vector<int> div;
    //O(sqrt(number))
    for(int i=1; i<=(int)sqrt(number); i++){
        if(number % i == 0 ){
            div.push_back(i);
            if(number/i != i){
             div.push_back(number/i);
            }
        }
    }
    //O(no of factors *log (no. of factors ))
    sort(div.begin(), div.end());

    //O(number of factors)
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