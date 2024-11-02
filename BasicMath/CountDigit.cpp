#include<bits/stdc++.h>
using namespace std;

//COUNT DIGIT WITH LOG
int countDigitWithLog(int N){

    int count = (int)(log10(N)+1);
    return count;
}

//COUNT DIGIT WITH DIVIDE
int countDigitWithDivide(int N){
     int counter = 0;
    while(N>0){
        N = N/10;   //It can be count to get the number in a digit
        counter ++;
    }
    return counter;
}

//COUNT DIGIT WITH MODULO
int countDigitWithModulo(int N){
     int counter = 0;
    while(N>0){

        int last_digit = N % 10;    //It is not required step to get the number in digit
        N = N/10;   //It can be count to get the number in a digit
        counter ++;
    }
    return counter;
}

int main(){

    int num;
    cout<< " Enter the number: "<<endl;
    cin >> num;
   

    cout<< "The number of digits: "<<countDigitWithModulo(num)<<endl;
    cout<< "The number of digits: "<<countDigitWithDivide(num)<<endl;
    cout<< "The number of digits: "<<countDigitWithLog(num)<<endl;

    return 0;
}