#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cout<< "Enter the string: "<<endl;
    cin >> str;

    int qu;
    cout<< "Enter the number of queries: "<<endl;
    cin >> qu;

    int hash[256] = {0};

    for(int i = 0; i<str.size(); i++){
        hash[str[i]]++;     //hash[int]--> so if we hash[char]; the char will be auto casted to its int value
    }

    while(qu--){
        cout<< "Enter the character to search: "<<endl;
        char c;
        cin >> c;
        cout<< "The frequency is: "<<hash[c]<<endl;


    }
    return 0;
}