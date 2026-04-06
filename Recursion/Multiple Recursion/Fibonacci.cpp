 //Multiple recursion---> One ends then another one starts.
 #include<bits/stdc++.h>
 using namespace std;

 //every time we call a number it calls its correspondent 2 function calls again
 //T.C= O(2^n)(near about)(Exponential)
 //Can be solved in dynamic programming

//Basic recursion
 int fibo(int n){
    if(n<=1)return n;
    return fibo(n-1)+fibo(n-2);
 }

//Iterative approach
 int fib(int n) {
     if (n <= 1)
         return n;
     int prev1 = 1, prev2 = 0;
      int curr;
     for (int i = 2; i <= n; i++) {
         curr = prev1 + prev2;
         prev2 = prev1;
         prev1 = curr;
     }
     return curr;
 }
 
 //Tail recursion(optimized by compiler)
int fibhelper(int n, int a, int b){
   if(n==0) return a;
   if(n==1) return b;
   return fibhelper(n-1,b,a+b);
}
 int fib(int n){
   return fibhelper(n,0,1);
 }


//Dynamic programming approach
 int fibdp(int n, vector<int> &dp){
  
   if(n<=1) return n;
   if(dp[n]!= -1) return dp[n];
   return dp[n]=fibdp(n-1,dp)+fibdp(n-2,dp);
 }

 int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin >> n;
    vector <int> dp(n+1,-1);
    int ans = fibdp(n,dp);
    cout<<n<<" th fibo number is: "<<fibo(n)<<endl<<fib(n)<<endl<<ans<<endl;
    return 0;
 }