#include "reverseArray.h"
#include <iostream>

using namespace std;

// void reverseArray (int anArray[], int firstElem, int lastElem) {
//     if  (firstElem <= lastElem) {
//         cout << anArray[lastElem] << endl;
//         reverseArray (anArray, firstElem, lastElem);
//     }
// }
void reverseArray(int anArray[], int firstElem, int lastElem) {
    if (firstElem < lastElem) {
        // Swap the elements at firstElem and lastElem
        int temp = anArray[firstElem];
        anArray[firstElem] = anArray[lastElem];
        anArray[lastElem] = temp;

        // Recursively call with updated indices
        reverseArray(anArray, firstElem + 1, lastElem - 1);
    }
}