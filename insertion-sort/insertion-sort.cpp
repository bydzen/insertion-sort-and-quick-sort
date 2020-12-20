/*
    Title   : Program Age Insertion Sort.
    Author  : Sultan Kautsar (1303194010).
    Desc    : Sorting with Insertion Sort for Customer Age.

*/

#include <iostream>
#include <stdlib.h> /* for generating random number (rand) */

using namespace std;

/* function to sort an array using insertion sort */
void insertionSort(int arr[], int n) {
    int i, k, j;
    for (i = 1; i < n; i++) {
        k = arr[i];
        j = i - 1;

        /* shifting elements of arr[0..i-1] towards right if are greater than k */
        while (j >= 0 && arr[j] > k) {
            arr[j + 1] = arr[j];
            j = j - 1;
        };

        arr[j + 1] = k;
    };
};

int main() {
    int n, i, age;
    char yn;

    YN:
    /* greeting author identity and purpose the program */
    cout << "-->> Program Age Insertion Sort <<--\n\n\n";
    cout << "Program Name       : Age Insertion Sort" << endl;
    cout << "Program Language   : C++" << endl;
    cout << "Created by         : Sultan Kautsar" << endl;
    cout << "ID Creator         : 1303194010" << endl;
    cout << "Description        : Sorting with Insertion Sort for Customer Age" << endl << endl;

    cout << "Random input (y/n)?: ";
    cin >> yn;

    cout << endl;

    if (yn != 'y' && yn != 'n' && yn != 'Y' && yn != 'N') {
        system("clear");
        goto YN;
    };

    INN:
    /* size of array */
    cout << "Input array size: ";
    cin >> n;

    int arr[n];

    cout << endl;

    if (yn == 'y' || yn == 'Y') {
       cout << "Random array: [ ";
        for (i = 0; i < n; i++) {
            age = rand() % 45 + 15;
            cout << age << " ";
            arr[i] = age;
        };
        cout << "]" << endl;
    } else if (yn == 'n' || yn == 'N') {
        for (i = 0; i < n; i++) {
            cout << "Element [" << i << "]: ";
            cin >> age;
            arr[i] = age;
        };
    };

    cout << endl;

    /* print unsorted array */
    cout << "Unsorted array: \n[ ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    };

    cout << "]";

    /* sort the array */
    insertionSort(arr, n);

    cout << endl << endl;

    /* print sorted array */
    cout << "Sorted array: \n[ ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    };

    cout << "]";

    cout << endl << endl << "Program terminated." << endl;

    return 0;
};
