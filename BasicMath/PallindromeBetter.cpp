#include<bits/stdc++.h>
using namespace std;

//1331-->1331
//1111--->1111
//1234--->4321 (x)

bool isPalindrome(int Num){
   if(Num < 0 ) return false;
   long long a = Num;
   long long ans = 0;

   while(Num>0){
    ans = 10*ans+Num%10;
    Num = Num/10;
   }
   return a == ans;
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