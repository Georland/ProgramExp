#include <iostream>
#include <string>

#include "Source.cpp"

using namespace std;

int main() {

    int i = 74;
    string res;

    Solution A;
    res = A.intToRoman(i);

    cout << res << endl;

    return 0;
}