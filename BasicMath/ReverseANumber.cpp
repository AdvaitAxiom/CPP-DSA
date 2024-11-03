#include<bits/stdc++.h>
using namespace std;

//4567---->7654
//5300---->35
int reverseNumber(int Num){
    int is_neg = Num > 0 ? 1 : -1;
    Num *= is_neg;
    int reverse_Number = 0; 
    while(Num>0){
        int last_digit = Num % 10;
        Num = Num / 10;

        if (reverse_Number > INT_MAX / 10 || (reverse_Number == INT_MAX / 10 && last_digit > 7)) {
                return 0;  // Overflow
            }
            // if (reverse_Number < INT_MIN / 10 || (reverse_Number == INT_MIN / 10 && last_digit < -8)) {
            //     return 0;  // Underflow
            // }
        reverse_Number = (reverse_Number*10) + last_digit;
    }
    return reverse_Number*is_neg;
}
int main(){
    int number;
    cout<<"Enter the number: "<<endl;
    cin>> number;

    cout<<"The reverse number is: "<<reverseNumber(number)<<endl;
    return 0;
}



//GPT LINK ---->> https://chatgpt.com/share/672788f3-0250-8002-a9d3-43fa2be01316