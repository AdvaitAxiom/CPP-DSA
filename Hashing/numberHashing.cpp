#include<bits/stdc++.h>
using namespace std;
//5 [Size of array]
//13213 [array]
//5 [NUmber of Query]
//1 [hash of 1]
//4 [hash of 4]
//2 [hash of 2]
//3 [hash of 3]
//12    [hash of 12]

int main(){

//Taking size input
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin >> size;

//Define size
    int arr[size];  

    cout<<"Enter the elements: "<<endl;
//Taking element input
    for (int i=0;i<size;i++){
        cin>>arr[i]; 
    }
//precompute
    int hash[13]= {0};
    for(int i = 0; i<size; i++){
        hash[arr[i]] +=1;
    }

//Taking query counts
    int query;
    cout<<"Enter number of queries:"<< endl;
    cin >> query;

//Taking query and calling hash function
    while(query--){
        int number;
        cin >> number;
        cout<<hash[number]<<endl;
    }

//****** WE CAN DECLARE ARRAY UPTO 1e6 WITHIN MAIN---->>arr[10^6]
//OVER THAN THAT IT WILL THROW A SEGMENTATION FAULT ERROR
//BUT GLOBALLY WE CAN DECLARE ARRAY UPTO 1e7---->> arr[10^7];

// bool--> arr[1e7] (main)
//bool --> arr[1e8] (globally) 

    return 0;
}