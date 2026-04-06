#include<bits/stdc++.h>
using namespace std;

//invalid string --> string str = {'a','b','c'};
//valid string --> string str = {'a','b','c','\0'}; with null character at the end

int main(){
    string str = {'a','b','c','\0'}; // Null character to terminate the string
    char arr[] = "Alapan";
    char arr2[] = {'a', 'b', 'c', '\0'}; // Null character to terminate the char array
    cout<<str<<endl;
    cout<<arr<<endl;
    cout<<arr2<<endl;
    cout<<"Length of string is: "<<str.length()<<endl;
    char str2[100];
    char str3[100];
    char str4[10];
    cout<<"Enter character array: ";
    // cin>>str4;  // Input stops at whitespace "Alapan Das" --> "Alapan"
    // cin.getline(str3,100);  //Breaks when newline is encountered
    cin.getline(str4,100,'$'); //Custom delimiter--> stop taking input when '$' is encountered
    cout<<"String is: "<<str4<<endl;

    for(char c: str4){
        cout<< c<<",";   }

    string s1 = "advaitaxiom";
    int counter = 0;
    for(int i = 0 ; i < s1[i] != '\0';i++){
        counter++;
        cout<<s1[i]<<endl;
    }
    cout<<"Length of string using loop: "<<counter<<endl;
    return 0;
}