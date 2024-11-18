#include<bits/stdc++.h>
using namespace std;

//Character - 'a' = index in hash array
// 'f'- 'a'(based on ASCII of these letters)
//=102 - 97 = 5
//[a,b,c,d,e,f]-->>array
//[0,1,2,3,4,5]-->>index of array
int main(){
    string str;
    cout<<"Enter the string to check: "<<endl;
    cin >> str;

    int qu;
    cout<<"Enter no. of queries: "<<endl;
    cin >> qu;

    int hash[26]= {0};

    for (int i =0 ; i<str.size();i++){
        hash[str[i]-'a']++;
    }

    while(qu--){
        char c;
        cout<< "Enter char to check: "<<endl;
        cin >> c;
        cout<< "Frequency is: "<<hash[c-'a']<<endl;
    }

    return 0;
}