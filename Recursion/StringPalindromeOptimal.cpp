#include<bits/stdc++.h>
using namespace std;

bool recursive(int i,int n,string&str){
    if(n==i) return true;//only 1 element
    if(!isalnum(str[i]))   return recursive(i+1,n,str);
    if(!isalnum(str[n]))   return recursive(i,n-1,str);
    if(tolower(str[i])!=tolower(str[n]))
    {//cout<<"hi1"<<str[i];
    return false;}
    if(i<n+1)    //for more than 2 letter
    return recursive(i+1,n-1,str);
    return true;
}

    bool isPalindrome(string s) {
        int n=s.size();
        if(n==0)
        return true;

        bool rev=recursive(0,n-1,s);
        return rev;
    }

    int main(){
    string s;
    cout<<"Enter string: ";
    cin>> s;
    cout<<isPalindrome(s);
    return 0;
}
