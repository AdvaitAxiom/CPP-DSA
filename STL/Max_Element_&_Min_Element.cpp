#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5, 3, 2, 1};
    int size = sizeof(a) / sizeof(a[0]);

    int* max_eleAddress = max_element(a, a + size);
    int max_eleValue = *max_element(a, a + size);

    int* min_eleAddress = min_element(a, a + size);
    int min_eleValue = *min_element(a, a + size);

    cout << "Max element value: " << max_eleValue << endl;
    cout << "Min element value: " << min_eleValue << endl;

    return 0;
}
