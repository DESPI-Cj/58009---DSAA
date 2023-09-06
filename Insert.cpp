#include <iostream>
using namespace std;
	//
void insertbefore2ndelement(int array[], int& size, int newValue) 
{
    // Shift elements to make space for the new value
    for (int i = size; i > 1; i--) 
	{
        array[i] = array[i - 1];
    }

    // Insert the new value before the 2nd element
    array[1] = newValue;
    size++;
}

int main() {
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    // Print the initial array
    cout << "Initial array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Array[" << i << "] = " << array[i] << endl;
    }

    // Insert a new value before the 2nd element
    int newValue;
    cout << "Enter a value to insert before the 2nd element: ";
    cin >> newValue;
    insertbefore2ndelement(array, size, newValue);

    // Print the updated array
    cout << "Updated array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Array[" << i << "] = " << array[i] << endl;
    }

    return 0;
}

