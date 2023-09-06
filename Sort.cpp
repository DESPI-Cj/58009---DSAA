#include <iostream>
using namespace std;

int main() {
    int array[100] = {5,4,3,2,1};
    int temp_array[100] = {};
    int size = 5;
    cout << "Initial array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Array[" << i << "] = " << array[i] << endl;
    }
    
     for (int i = 1; i <= size; i++) {
        for (int j = 0; j < size; j++) {
            if (array[j] == i) {
                temp_array[i - 1] = array[j];
                break; // Break the loop once the element is found and placed in temp_array
            }
        }
    }

    // Print the sorted array (temp_array)
    cout << "Sorted array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Array[" << i << "] = " << temp_array[i] << endl;
    }
    return 0;
}

