#include <iostream>
using namespace std;

// Part 1: Function definition
void analyze_pointer(int *ptr) {
    cout << "Memory Location: " << ptr << endl;
    cout << "Value:           " << *ptr << endl << endl;
}

int main() {
    // Part 2a: Stack Allocation
    int stackVal = 42;
    cout << "--- Stack Allocation ---" << endl;
    analyze_pointer(&stackVal);

    // Part 2b: Heap Allocation
    int *heapVal = new int;
    *heapVal = 99;
    cout << "--- Heap Allocation ---" << endl;
    analyze_pointer(heapVal);

    delete heapVal; // Free allocated memory
    return 0;
}