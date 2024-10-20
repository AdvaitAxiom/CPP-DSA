#include <bits/stdc++.h>
using namespace std;

// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *
void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// *
// * *
// * * *
// * * * *
// * * * * *
void print2(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// * * * * *
// * * * *
// * * *
// * *
// *
void print3(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j >= i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
void print4(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
void print5(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
void print6(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

// 5 4 3 2 1
// 5 4 3 2
// 5 4 3
// 5 4
// 5
void print7(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j >= i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}


//       *      
//      ***     
//     *****    
//    *******   
//   *********  
void print8(int rows)
{
    // rows
    for (int i = 0; i < rows; i++)
    {
        // spaces
        for (int j = 0; j < rows - i-1; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        //spaces
        for (int j = 0; j < rows - i - 1; j++)
        {
            cout << " ";
        }
        cout<<endl;
    }
}

// *********
//  ******* 
//   *****  
//    ***   
//     *   
void print9(int rows){
    for(int i=0;i<rows;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*rows-(2*i+1);j++){
            cout<<"*";
        }
         for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<< endl;
    }
}

// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321
void print10(int rows){
    for(int i=0;i<rows;i++){
        for(int j=1; j<=i+1;j++){
            cout<<j;
        }
        for(int j=(rows-i-1)*2;j>=1;j--){
            cout<<" ";
        }
        for(int j=i+1;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
void print11(int rows){
    int counter=1;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout<<counter<<" ";
            counter++;
        }
        cout<<endl;
    }
}

// A
// A B
// A B C
// A B C D
// A B C D E
void print12(int rows){
    for(int i=0;i<rows;i++){
        for(int j=0;j<=i;j++){
            cout<<(char)('A'+j)<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout << "rows: " << endl;
    cin >> n;

    // print1(n);
    // cout<<endl;
    // print2(n);
    // cout<<endl;
    // print3(n);
    // cout<<endl;
    // print4(n);
    // cout<<endl;
    // print5(n);
    // cout<<endl;
    // print6(n);
    // cout<<endl;
    // print7(n);
    // cout<<endl;
    // print8(n);
    // print9(n);
    print12(n);

    return 0;
}