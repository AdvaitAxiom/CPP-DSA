 //Multiple recursion---> One ends then another one starts.
 #include<bits/stdc++.h>
 using namespace std;

 //every time we call a number it calls its correspondent 2 function calls again
 int fibo(int n){
    if(n<=1)return n;
    return fibo(n-1)+fibo(n-2);
 }
 int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin >> n;
    cout<<n<<" th fibo number is: "<<fibo(n);
    return 0;
 }