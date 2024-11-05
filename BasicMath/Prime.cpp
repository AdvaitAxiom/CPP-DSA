#include<bits/stdc++.h>
using namespace std;

//SQUARE ROOT METHOD (BETTER THAN BRUT FORCE)
void divisors(int number){
    int counter = 0;
    //O(sqrt(number))
    for(int i=1; i<=sqrt(number); i++){
        if(number % i == 0 ){
            counter ++;
            if(number/i != i){
             counter ++;
            }
        }
    }
    if (counter == 2){cout<< "Prime";}
    else{cout<<"Not Prime";}

}

int main(){
    int number;
    cout << "Enter the Number: "<<endl;
    cin >> number;
    divisors(number);
    return 0;
}