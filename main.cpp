#include <iostream>
#include "fibonacci.h"
#include "fact.h"
#include "reverStr.h"
#include "reverseArray.h"

using namespace std;

int main() {
    int n = 5; // Change this to the desired value of n

    cout << "⭐️ Calculating factorial of " << n << ":" << endl;
    cout << "   ";
    // Print the individual steps
    for (int i = n; i >= 0; i--) {
        cout << i;
        if (i > 0) {
            cout << ", ";
        }
    }
    cout << endl;
    cout << endl;

    // Calculate the final product
    int result = fact(n);

    // Print the final product
    cout << "✨ Final product of " << n << " factorial is " << result << endl;
    cout << endl;

    // String reverse
    string s = "cat";
    cout << "🙃 The string " << s << " has been reversed to ";
    reverStr(s);
    cout << endl;
    cout << endl;

    // int arr[] = {2, 4, 6, 8};
    // reverseArray(arr, 0, 3);
    // cout << arr[0] << arr[1] << arr[2]<< arr[3] << endl;
    int arr[] = {2, 4, 6, 8};
    int length = sizeof(arr) / sizeof(arr[0]);

    cout << "🌈 An array ";
    // Print array
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << " has been reversed to ";
    reverseArray(arr, 0, length - 1);

    // Print the reversed array
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;

    int size = 100; // Adjust the size of the array as needed
    int nacciRray[size];

    fibonacci(nacciRray, size);

    // Print the Fibonacci sequence in array format
    cout << "💫 Fibonacci array calculated by given size of " << size << " elements." << endl;
    cout << "   {";
    for (int i = 0; i < size; i++) {
        if (i != 0) {
            cout << ", ";
        }
        cout << nacciRray[i];
    }
    cout << "}" << endl;
    cout << endl;

    // int arr[] = {2, 4, 6, 8};
    // reverseArray(arr, 0, 3);
    // cout << arr[0] << arr[1] << arr[2]<< arr[3] << endl;
    int nacciRrayLength = sizeof(nacciRray) / sizeof(nacciRray[0]);

    reverseArray(nacciRray, 0, nacciRrayLength - 1);

    // Print the reversed nacciRray in the Fibonacci sequence array format
    cout << "🍄 Reversed nacciRray in Fibonacci array format:" << endl;
    cout << "   {";
    for (int i = 0; i < nacciRrayLength; i++) {
        if (i != 0) {
            cout << ", ";
        }
        cout << nacciRray[i];
    }
    cout << "}" << endl;

    return 0;
}
