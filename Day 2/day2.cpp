#include <iostream>
using namespace std;

int occurance(int array[], int size, int x) {
    int count = 0;  
    for (int i = 0; i < size; i++) {
        if (array[i] == x) {  
            count++;
        }
    }
    return count;  
}

int main() {
    int array[] = {10, 24, 19, 26, 27, 31, 33, 35, 42, 44};
    int size = sizeof(array) / sizeof(array[0]);  
    cout << "Enter the number whose occurrence is to be found: ";
    int x;
    cin >> x;

    int result = occurance(array, size, x);
    cout << "The occurrence of " << x << " is " << result << endl;

    return 0;
}
