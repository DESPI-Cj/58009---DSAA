#include <iostream>
using namespace std;

int main() {
    int array[] = {5, 4, 3, 2, 1}; // No need to specify size explicitly
    
    // Calculate the number of elements in the array
    int numElements = sizeof(array) / sizeof(array[0]);

    cout << "Number of elements in the array: " << numElements << endl;

    return 0;
}

