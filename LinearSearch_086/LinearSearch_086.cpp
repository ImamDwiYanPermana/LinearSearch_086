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
    // accept array element 
    cout << "\n-------------------";
    cout << " Enter Array element \n";
    cout << "----------------------\n";
    for (i = 0; i < n; i++) {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}

void LinearSearch() {
    char ch;
    int comprasions; // Number of comprasions
    {
        // Accept teh number be searched
        cout << "\nEnter the element you want to search: ";
        int item;
        cin >> item;

        comprasions = 0;



