#include<bits/stdc++.h> //string , iostream, limits.h
using namespace std;

//4567---->7654
//5300---->35

    int reverse(int x) {
        string str = to_string(x); // Convert the integer to a string
        string reversedStr;

        // If the number is negative, handle the sign
        if (str[0] == '-') {
            reversedStr = '-' + string(str.rbegin(), str.rend()+1); // Reverse excluding the '-' sign
        } else {
            reversedStr = string(str.rbegin(), str.rend()); // Reverse the string
        }

        // Convert the reversed string back to an integer
        long long reversedNum = stoll(reversedStr); // Use stoll to handle larger numbers

        // Check for overflow and return 0 if necessary
        if (reversedNum > INT_MAX || reversedNum < INT_MIN) {
            return 0;
        }

        return static_cast<int>(reversedNum); // Return the reversed number as int
    }

int main(){
    int x;

    cout << "Enter an integer: ";
    cin >> x;  // Take input from the user

    int reversed = reverse(x); // Call the reverse function
    cout << "Reversed: " << reversed << endl; // Output the result

    return 0;
}


//GPT LINK ---->> https://chatgpt.com/share/672788f3-0250-8002-a9d3-43fa2be01316