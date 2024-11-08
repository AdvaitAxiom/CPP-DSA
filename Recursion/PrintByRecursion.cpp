#include<bits/stdc++.h>
using namespace std;

//When a function calls itself until a specified condition is met.(Base Condition)

//If no specified condition-->Segmentation fault or stack overflow because whe a function is calling its second copy, until the second one is returning something or finishes its job the first function remains in memory but there is no last function.

//RECURSION TREE

int counting = 0;//Global variable
void f(){

    //Base Condition
    if(counting == 10){
        return;
    }
    cout<<counting;
    counting ++;
    f();
    

}
int main(){
    f();
    return 0;
}