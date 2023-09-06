#include <iostream>
using namespace std;

int main() {
	//Create Array with max size 11
    int array[11]; 

    //input values from 1 to 10 using a for loop
    for (int x = 0; x < 10; x++) {
        array[x] = x + 1;
    }

	//Print Array 
    cout << "Initial array: "<<endl;
    for (int x = 0; x < 10; x++) 
	{ 
        cout << "Array("<<array[x-1]<<"" << ")"<< "=" << x+1 << endl;
    }
    cout << endl;

    int newItem;

    cout << "Input new item: ";
    cin >> newItem;
    
    array[10] = newItem; 

    cout << "Update array: "<<endl;
    for (int x = 0; x < 10; x++) 
	{ 
        cout << "Array("<<array[x-1]<<"" << ")"<< "=" << x+1 << endl;
    }
    cout;
    
    cout<<"Array(10)"<<"="<<array[10];


    return 0;
}

