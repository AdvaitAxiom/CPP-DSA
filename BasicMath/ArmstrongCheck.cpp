#include<bits/stdc++.h>
using namespace std;

//1^3 + 5^3 + 3^3 = 153
//1^4 + 6^4 + 3^4 + 4^4 = 1634

bool checkArmstrong(int num){
    int original = num;
    int count = (int)(log10(num)+1);
    int sum = 0;
     while(num){
        int last = num%10;
        sum = sum + pow(last,count);
         num = num/10;
         
     }
     return sum ==original;
}

int main(){
    int number;
    cout << "Enter the Number: "<<endl;
    cin >> number;

    if(checkArmstrong(number)) {cout << "Number is Armstrong Number.";}
    else {cout<<"Number is not Armstrong Number";}
    return 0;
}