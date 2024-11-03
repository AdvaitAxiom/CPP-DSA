#include<bits/stdc++.h>
using namespace std;

//1331-->1331
//1111--->1111
//1234--->4321 (x)

bool isPalindrome(int Num){
    int reversed = 0;
    int Num2 = Num;
    while(Num>0){
        int last = Num % 10;
        reversed = (reversed*10) + last;
        Num /= 10;
    }
    return Num2 == reversed;
}
int main(){
    int Number;
    cout<<"Enter the Number: "<<endl;
    cin>>Number;

    if(isPalindrome(Number)){
        cout<<"Number is Palindrome"<<endl;
    }else{
        cout<< "Number is not Palindrome"<< endl;
    }

    return 0;
}