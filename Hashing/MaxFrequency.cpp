#include <iostream>
#include <map>

using namespace std;

int main() {
    // Initialize the map with some key-value pairs
    map<int, int> mpp = {
        {1, 3},  // Key: 1, Value (Frequency): 3
        {2, 5},  // Key: 2, Value (Frequency): 5
        {3, 2},  // Key: 3, Value (Frequency): 2
        {4, 5}   // Key: 4, Value (Frequency): 5
    };

    // Variables to store the key with the highest frequency and the maximum frequency
    int max_key = -1;
    int max_frequency = 0;

    // Iterate through the map to find the key with the maximum frequency
    for (const auto& pair : mpp) {
        if (pair.second > max_frequency) {
            max_frequency = pair.second;
            max_key = pair.first;
        }
    }

    // Output the result
    cout << "Value with the highest frequency: " << max_key << endl;
    cout << "Frequency: " << max_frequency << endl;

    return 0;
}
