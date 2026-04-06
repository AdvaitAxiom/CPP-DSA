#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "Hello";
    cout <<str <<endl;
    str = "World";
    cout<< str<<endl;

    char arr[] = "Alapan";  
    // arr = "Das";    //Char array are immutable but string are mutable
    cout<< arr<<endl;
    string str2 = "Numb";
    string final = str + str2;
    cout << (str == str2) <<endl;  // false --> 0
    cout << (str != str2) <<endl;  // true --> 1
    cout << (str < str2) <<endl;   // true --> 1    //Checks lexographical order
    cout <<str.length() <<endl;  //5
    cout<<final<<endl;
    reverse(final.begin(),final.end());
    cout<<final<<endl;
    return 0;
}