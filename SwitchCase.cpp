#include<bits/stdc++.h>
using namespace std;

int main(){
    int day;
    cout<<"Enter day number: "<<endl;
    cin>> day;

    switch(day){
        case 1:
            cout<<"Sunday";
            break;
        case 2:
            cout<<"Monday";
        case 3:
            break;
            cout<<"Tuesday";
            break;
        case 4:
            cout<<"Wednesday";
            break;
        case 5:
            cout<<"Thursday";
            break;
        case 6:
            cout<<"Friday";
            break;
        case 7:
            cout<<"Saturday";
            break;
        default:
            cout<<"Wrong Input";
        cout<<"Problem in switch case"<<endl;
    }
    cout << "Check";
    return 0;
}