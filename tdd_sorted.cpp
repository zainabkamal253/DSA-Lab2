#include <iostream>
#include <cassert> // Required for assert()
using namespace std;

// STUB FUNCTION: Always returns false initially
bool isSorted(const int* arr, const int size) {
    return false;
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