 #include<bits/stdc++.h>
 using namespace std;

void swaparr(int i,int arr[],int size){
    if(i>=size/2)return;
    swap(arr[i],arr[size-i-1]); //swap(arr[i],arr[n-1])--->TWO POINTER APPROACH
    swaparr(i+1,arr,size);
}
 
 
 int main(){
//Size
    int size;
    cout<<"Enter Size: ";
    cin >> size;
//Array
    int arr[size];
//Array Element Input
    cout<<"Enter the numbers: ";

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
//Swap
    swaparr(0,arr,size);
//Array Element Output
    cout<<"Your array: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
 }