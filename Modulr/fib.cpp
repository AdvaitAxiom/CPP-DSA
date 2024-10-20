#include<bits/stdc++.h>
using namespace std;
//Fib nth number
int fib(int n){

        int a=0, b=1,c,i;
        if(n==0){
                return a;
        }
        for(i=2;i<=n;i++){
              c=a+b;
              a=b;
              b=c;  
        }return b;
}

int main()
{      
        int n; 
       cout<<"Enter the value of n: "<<endl;
       cin>>n;

       cout<<fib(n);
        
        return 0;
}