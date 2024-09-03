// CSC1061_Lab13_04_WhatOrder
// This lab comes from CSC1061 Computer Science I zyBook
// Chapter 13 Templates
// The code demonstrates a function template
// TODO: Define a generic method called CheckOrder() that
//       takes in four variables of generic type as arguments.
//       The return type of the method is integer

#include <string>
#include <iostream>

using namespace std;

// Function prototype
template <typename T>
int CheckOrder(T item1, T item2, T item3, T item4);

int main() {
    
    cout << "This application demonstrates a template function." << endl;
    cout << "The application returns -1 if the items are in ascending order, " << endl;
    cout << "1 if they are in descending order, and 0 if they are not in order." << endl;
    
    // Read in four strings
    string stringArg1, stringArg2, stringArg3, stringArg4;
    cout << "Enter four strings (words): ";
    cin >> stringArg1;
    cin >> stringArg2;
    cin >> stringArg3;
    cin >> stringArg4;
    // Check order of four strings
    cout << "Order: " << CheckOrder(stringArg1, stringArg2, stringArg3, stringArg4) << endl;;

    // Read in four doubles
    double doubleArg1, doubleArg2, doubleArg3, doubleArg4;
    cout << "Enter four numbers with decimal values: ";
    cin >> doubleArg1;
    cin >> doubleArg2;
    cin >> doubleArg3;
    cin >> doubleArg4;
    // Check order of four doubles
    cout << "Order: " << CheckOrder(doubleArg1, doubleArg2, doubleArg3, doubleArg4) << endl;;

    return 0;
}
//Function definition
template <typename T>
int CheckOrder(T item1, T item2, T item3, T item4) {
    // Check the order of the input: return -1 for ascending,
    // 0 for neither, 1 for descending
    if ((item1 < item2)
        && (item2 < item3)
        && (item3 < item4)) {
        return -1;
    }
    else if ((item1 > item2)
        && (item2 > item3)
        && (item3 > item4)) {
        return 1;
    }
    else {
        return 0;
    }
}