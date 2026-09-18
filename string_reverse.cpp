#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    // Dynamically allocate memory for string copy
    int len = input.length();
    char *dynStr = new char[len + 1];

    for (int i = 0; i < len; i++) {
        dynStr[i] = input[i];
    }
    dynStr[len] = '\0';

    // Reverse string in-place using pointers
    int left = 0, right = len - 1;
    while (left < right) {
        swap(dynStr[left], dynStr[right]);
        left++;
        right--;
    }

    cout << "Reversed String: " << dynStr << endl;

    // Free dynamic memory
    delete[] dynStr;
    return 0;
}