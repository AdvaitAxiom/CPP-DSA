// Online C++ compiler to run C++ program online
#include <iostream>
#include<sstream>
#include<vector>
#include<string>
using namespace std;

int main() {
    // Write C++ code here
    // std::cout << "Try programiz.pro";
    string s; 
    getline(cin, s);
    stringstream ss(s);
    string num;
    vector<int> vec;
    while(getline(ss,num,',')){
        vec.push_back(stoi(num));
    }
    for(auto it: vec){
        cout<< it <<" ";
    }
    return 0;
}