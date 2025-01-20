#include<bits/stdc++.h>
using namespace std;

// BUBBLE SORT--->Push the max element to the last by adjacent swaps

//Opposite of Selection Sort

//13,46,24,52,20,9

//1st Iteration-->(Adjacent swaps)
        //Step 1: 13,46 compare--> sorted
        //Step 2: 46,24 compare--> unsorted-->swap--> 13,24,46,52,20,9
        //Step 3: 46,52 compare--> sorted
        //Step 5: 52,20 compare--> unsorted-->swap-->13,24,46,20,52,9
        //Step 6: 52, 9 comapre--> unsorted-->swap-->13,24,46,20,9,52

        //OUTPUT- 13,24,46,20,9,52(HIGHEST ELEMENT IS AT THE LAST=52)
//2nd Iteration--> considered Array--> 13,24,46,20,9 [last ele is discarted as it is highest and sorted]
        //Redo adjacent compare and swaps 


int main(){

    return 0;
}