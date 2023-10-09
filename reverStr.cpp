#include "reverStr.h"
#include <iostream>

using namespace std;

void reverStr (string s) {
    int len = s.size();
    if (len > 0) {
        cout << s[len -1];
        reverStr(s.substr(0, len - 1));
    }
}
