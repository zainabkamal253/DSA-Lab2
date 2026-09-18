#include <iostream>
#include <cassert> // Required for assert()
using namespace std;

bool isSorted(const int* arr, const int size) {
    // An array of size 0 or 1 is always considered sorted
    if (size <= 1) {
        return true;
    }

    // Compare each element to its next neighbor
    for (int i = 0; i < size - 1; i++) {
        // If an element is greater than the next one, the array is unsorted
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }

    return true;
}

// ------------------- TEST SUITE ------------------- //

void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    assert(isSorted(arr, 5) == true); // Should pass for sorted array
}

void testUnsortedArray() {
    int arr[] = {1, 4, 3, 5, 6};
    assert(isSorted(arr, 5) == false);
}

void testDuplicateValues() {
    int arr[] = {1, 2, 2, 3, 5};
    assert(isSorted(arr, 5) == true);
}

void testSingleElement() {
    int arr[] = {10};
    assert(isSorted(arr, 1) == true);
}

void testDescendingArray() {
    int arr[] = {5, 4, 3, 2, 1};
    assert(isSorted(arr, 5) == false);
}

void testNegativeValues() {
    int arr[] = {-5, -3, -1, 0, 2};
    assert(isSorted(arr, 5) == true);
}

void testAllEqualElements() {
    int arr[] = {7, 7, 7, 7};
    assert(isSorted(arr, 4) == true);
}

void testEmptyArray() {
    int arr[] = {};
    assert(isSorted(arr, 0) == true);
}

int main() {
    cout << "Running tests..." << endl;

    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testAllEqualElements();
    testEmptyArray();

    cout << "All tests passed successfully!" << endl;
    return 0;
}