#include <iostream>
using namespace std;

int arr[20]; // Array to be searched
int n; // Number of elements in the array
int i; // Index of array element

void input()
{
    while (true) {
        cout << "enter teh number of ekements int the array: ";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
        else
            cout << "\nArray SHould have minimum 1 and maximum 20 element.\n\n";
    }


