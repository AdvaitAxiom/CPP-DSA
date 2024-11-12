#include<bits/stdc++.h>
using namespace std;

     bool isPalindrome(string s, int i=0) {
        string orig= "";
        for (auto it : s) {
            if (isalnum(it)) {
                orig += tolower(it);
            }
        }
    for (char &c : orig) {
        c = tolower(c);
    }
    int size = orig.size();
    if(i>=size/2)return true;
    if(orig[i] != orig[size-i-1]) return false;
    return isPalindrome(orig,i+1);
    }


//ERROR FOR - A man, a plan, a canal: Panama
int main(){
    string s;
    cout<<"Enter string: ";
    cin>> s;
    cout<<isPalindrome(s,0);
    return 0;
}