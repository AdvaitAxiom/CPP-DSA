#include<bits/stdc++.h>
using namespace std;

// void pattern(int rows){
//     for(int i=1;i<=2*rows-1;i++){

//         int star=2*i-1;
//         int space=rows-i;

//         if(i>rows){
//             star=2*(2*rows-i)-1;
//             space=i-rows;
//         }

//         for(int j=1;j<=space;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=star;j++){
//             cout<<"*";
//         }
//         for(int j=1;j<=space;j++){
//             cout<<" ";
//         }
         
//         cout<<endl;
//     }
// }

void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=n;i>=0;i--){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<(2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }

}

int main(){
    int rows;
    cout<<"Enter rows: ";
    cin>> rows;

    pattern2(rows);
    return 0;
}