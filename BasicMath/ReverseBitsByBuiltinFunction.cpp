// Reverse bits of a given 32 bits unsigned integer.

// Note:

// 1. Note that in some languages, such as Java, there is no unsigned integer type. In this case, both input and output will be given as a signed integer type. They should not affect your implementation, as the integer's internal binary representation is the same, whether it is signed or unsigned.
// 2. In Java, the compiler represents the signed integers using 2's complement notation.

#include<bits/stdc++.h>
using namespace std;

uint32_t reverseBits(uint32_t n) {
    
    return __builtin_bitreverse32(n);   //The __builtin_bitreverse32 function isn’t available in standard C++ libraries or in the typical GCC or Clang built-ins. It’s also not a part of the <bits/stdc++.h> header. The __builtin functions provided by GCC generally don’t include bit-reversing for 32-bit integers specifically.
}

int main() {
    uint32_t n; // Example number
    cout << "Enter Number: " <<endl;
    cin >> n;
    cout << "Binary form of %n is: "<< bitset<32>(n)<<endl;
    cout << "Reversed: " << reverseBits(n) << endl;
    return 0;
}

//GPT LINK---->https://chatgpt.com/share/672929ea-d74c-8002-ad96-1dc91fe482ef