#include <iostream>
using namespace std;

int occurance(int array[], int size, int x) {
    int count = 0;  // Initialize count to 0
    for (int i = 0; i < size; i++) {
        if (array[i] == x) {  // Compare element, not index
            count++;
        }
    }
    return count;  // Return count after the loop finishes
}

int main() {
    int array[] = {10, 24, 19, 26, 27, 31, 33, 35, 42, 44};
    int size = sizeof(array) / sizeof(array[0]);  // Correctly calculate size

    cout << "Enter the number whose occurrence is to be found: ";
    int x;
    cin >> x;

    int result = occurance(array, size, x);
    cout << "The occurrence of " << x << " is " << result << endl;

    return 0;
}
