// Reverse bits of a given 32 bits unsigned integer.

// Note:

// 1. Note that in some languages, such as Java, there is no unsigned integer type. In this case, both input and output will be given as a signed integer type. They should not affect your implementation, as the integer's internal binary representation is the same, whether it is signed or unsigned.
// 2. In Java, the compiler represents the signed integers using 2's complement notation.

#include<bits/stdc++.h>
using namespace std;

uint32_t reverseBits(uint32_t n) {
    uint32_t reversed = 0;
    for (int i = 0; i < 32; ++i) {
        reversed = (reversed << 1) | (n & 1); // Shift reversed left, add least-significant bit of n
        n >>= 1; // Shift n right to get the next bit
    }
    return reversed;
}

int main() {
    uint32_t n; // Example number
    cout << "Enter Number: " <<endl;
    cin >> n;
    cout << "Binary form of %n is: "<< bitset<32>(n)<<endl;
    cout << "Reversed: " << reverseBits(n) << endl;
    return 0;
}

//GPT Link--> https://chatgpt.com/share/672929ea-d74c-8002-ad96-1dc91fe482ef


/*

### Explanation
1. We initialize `reversed` as `0`, which will store the reversed bits.
2. We calculate `bits`, the number of bits in the integer, by using `sizeof(n) * 8`.
3. We loop through each bit position in `n`. If the bit at position `i` in `n` is set, we set the corresponding bit in `reversed` at the mirrored position.
4. We return `reversed` at the end.


Understanding (n & (1 << i))
1 << i: This operation shifts the number 1 left by i positions. In binary terms, this creates a bitmask with only the 
𝑖
i-th bit set to 1 and all other bits set to 0.

For example, if i = 3, then 1 << 3 is 00001000 in binary.
n & (1 << i): This checks if the 
𝑖
i-th bit of n is 1.

By performing a bitwise AND between n and (1 << i), we get 0 if the 
𝑖
i-th bit in n is 0; otherwise, we get a non-zero result (specifically, (1 << i) itself).
If statement: If the 
𝑖
i-th bit in n is 1, then the if condition is true, and we proceed to set the corresponding mirrored bit in reversed.

Understanding reversed |= (1 << (bits - 1 - i))
bits - 1 - i: This calculates the "mirrored" position of the 
𝑖
i-th bit.

For example, if bits = 8 and i = 0, this evaluates to 7, meaning the least significant bit in n will become the most significant bit in reversed.
1 << (bits - 1 - i): This creates a bitmask to set the mirrored bit position in reversed.

For instance, if bits - 1 - i = 7, then 1 << 7 gives 10000000 in binary.
reversed |= (1 << (bits - 1 - i)): This sets the bit at the mirrored position in reversed.

We use the bitwise OR (|=) to set this bit without affecting other bits in reversed.



### Example
If `n` is `43261596` (binary: `00000010100101000001111010011100`), the output will be `964176192` (binary: `00111001011110000010100101000000`).

This approach has a time complexity of \(O(\text{number of bits})\), which is efficient for standard integers.
*/
