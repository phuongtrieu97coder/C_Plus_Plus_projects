#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <random>
#include <fstream>
#include <vector>
#include <algorithm>
#include <memory>
using namespace std;

void selectionSort(int*, int);
void swap(int*, int*);
int binarySearch(const int*, int, int);

int main() {
	
    const int SIZE = 10;

    // Array of unsorted values
    int values[SIZE] = { 59, 15, 95, 74, 81, 34, 23, 65, 7, 42 };
    int searchingFor;
    int results;
    int* ptr_arr = nullptr;
    ptr_arr = values;

    // Get an Search value
    cout << "Enter the integer value you wish to search for: ";
    cin >> searchingFor;

   // <Write a statement to call selectionSort on the array>
   // < Write a statement to call binarySearch on the array to find out if searchingFor exists in the array and return the results>
    selectionSort(ptr_arr, SIZE);
    results = binarySearch(ptr_arr, SIZE, searchingFor);

    if (results == -1)
       cout << "That number does not exist in the array.\n";
    else{
       // Otherwise results contains the subscript of
       // the specified employee ID in the array.
       cout << "Value we are searching for is at index " << results;
       cout << " in the array.\n";
    }

	return 0;
}


int binarySearch(const int* array, int size, int value)
{
    int first = 0,             // First array element
        last = size - 1,       // Last array element
        middle,                // Mid point of search
        position = -1;         // Position of search value
    bool found = false;        // Flag

    while (!found && first <= last)
    {
        middle = (first + last) / 2;     // Calculate mid point
        if (array[middle] == value)      // If value is found at mid
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > value)  // If value is in lower half
            last = middle - 1;
        else
            first = middle + 1;           // If value is in upper half
    }
    return position;
}

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int* array, int size)
{
    int minIndex, *minValue;
    for (int start = 0; start < (size - 1); start++)
    {
        minIndex = start;
        minValue = &array[start];
        for (int index = start + 1; index < size; index++)
        {
            if (array[index] < *minValue)
            {
                minValue = &array[index];
                minIndex = index;
            }
        }
        swap(array[minIndex], array[start]);
    }
}

