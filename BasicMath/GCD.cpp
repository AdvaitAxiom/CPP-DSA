#include<bits/stdc++.h>
using namespace std;
//GCD / HCF
//Here if n1- 9 , n2- 12 then we don't need to run the rum till 12 because the hcf will ly within 9
//so will run the loop till min(n1,n2)
//TC -> O(min(n1 ,n2)) (worst case)

//ERROR ---> (0,25) and (17,0)
int checkgcd(int num1, int num2){
    int gcd =1;
    for(int i = 1; i<=min(num1,num2); i++){
        if(num1%i == 0 && num2%i == 0){
            gcd = i;
        }
    }
    return gcd;
}

//Better complexity than before in some cases as it can find the hcf at first iteration
int checkhcf(int num1, int num2){
    int gcd =1;
    if(num1 ==0){return num2;}
    if(num2 ==0){return num1;}
    for(int i = min(num1, num2); i>=1; i--){
        if(num1%i == 0 && num2%i == 0){
            gcd = i;
            break;
        }
    }
    return gcd;
}
int main(){
    int num1, num2;
    cout<<"Enter the numbers: "<<endl;
    cin >> num1 >> num2;
    //abs converts the negetive number to positive
    num1 = abs(num1);
    num2 = abs(num2);
    cout << "The HCF or GCD is: " <<checkhcf(num1, num2)<<endl;
    return 0;
}