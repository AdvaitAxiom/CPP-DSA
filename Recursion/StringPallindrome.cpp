#include<bits/stdc++.h>
using namespace std;

bool isPallindrome(int i, string s){
    int size = s.size();
    if(i>=size/2)return true;
    if(s[i] != s[size-i-1]) return false;
    return isPallindrome(i+1,s);
}


//ERROR FOR - A man, a plan, a canal: Panama
int main(){
    string s;
    cout<<"Enter string: ";
    cin>> s;
    cout<<isPallindrome(0,s);
    return 0;
}