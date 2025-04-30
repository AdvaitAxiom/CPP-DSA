#include<bits/stdc++.h>
using namespace std;

// O(N)
int fact(int N){
    if(N == 1) return 1;
    return N*fact(N-1);
}

int findMissing(int arr[],int N,int size){

   int factorial = fact(N);
    int mul = 1;
    //O(N)
    for(int i = 0; i<size;i++){
        mul = mul*arr[i];
    }
    // cout<<mul<<endl;
    // cout<<factorial;
    int missing = (factorial/mul);
    return missing;
}

int findMissingSum(int arr[], int N, int size){

    int sum = (N*(N+1))/2;
    int arrsum = 0;
    for(int i = 0; i<size;i++){
        arrsum +=arr[i];
    }

    return sum-arrsum;
}

int findMissingXOR(int arr[], int N, int size){

    int xor1 = 0;
    int xor2 = 0;

    for(int i = 0; i<=size;i++){
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i+1);
    }
    xor1 = xor1 ^ N;
    return xor2 ^ xor1;
}

int main(){
    int N;
    cout<<"Enter N: "<<endl;
    cin>>N;
    int size = N-1;
    int arr[size];
    cout<<"Enter Elements:"<<endl;
    for(int i = 0 ; i<size; i++){
        cin>>arr[i];
    }

    // int missing = findMissing(arr,N,size);
    // int missing = findMissingSum(arr,N,size);
    int missing = findMissingXOR(arr,N,size);
    cout<<missing;
    return 0;
}

// IF WE USE FACTORIAL TO SOLVE THEN,
//TIME COMPLEXITY--->O(N)
//SPACE COMPLEXITY-->O(N)

//TO REDUCE THE SPACE COMPLEXITY WE CAN USE SUMMATION
//SPCE COMPLEXITY-->O(1)

//Among the optimal approaches, the XOR approach is slightly better than the summation one because the term (N * (N+1))/2 used in the summation method cannot be stored in an integer if the value of N is big (like 105). In that case, we have to use some bigger data types. But we will face no issues like this while using the XOR approach.