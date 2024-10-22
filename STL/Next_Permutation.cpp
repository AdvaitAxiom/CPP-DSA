#include<bits/stdc++.h>
using namespace std;

int main(){
    string s= "213";

    sort(s.begin(),s.end()); //Other wise the next_oermutation will be of only few accoding to the dictionary order

    do{
        cout<< s <<endl;
    }while(next_permutation(s.begin(),s.end()));
    return 0;


/*If the string is 123 then the output is--
123
132
213
231
312
321
NULL

But if the string was 213---- the output will be only---
213
231
312
321
NULL
So to get the correct permutations we need to sort it in ascending order
*/
}