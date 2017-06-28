#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string intToRoman(int num) {

        int thousand = 0;
        int hundred = 0;
        int ten = 0;
        int one = 0;
        string res = "";

        // start from thousand
        thousand = num / 1000;
        for (int i = 0; i < thousand; ++i)
            res += 'M';
        // end of thousand
        num = num - thousand * 1000;

        // then hundred
        hundred = num / 100;
        if (hundred <= 3) {
            for (int i = 0; i < hundred; ++i)
                res += 'C';
        }
        else if (hundred <= 4) {
            res += "CD";
        }
        else if (hundred <= 8) {
            res += 'D';
            for (int i = 0; i < hundred - 5; ++i) {
                res += 'C';
            }
        }
        else
            res += "CM";
        // end of hundred
        num = num - hundred * 100;

        // then ten
        ten = num / 10;
        if (ten <= 3) {
            for (int i = 0; i < ten; ++i)
                res += 'X';
        }
        else if (ten <= 4) {
            res += "XL";
        }
        else if (ten <= 8) {
            res += 'L';
            for (int i = 0; i < ten - 5; ++i)
                res += 'X';
        }
        else
            res += "XC";
        // end of ten
        num = num - ten * 10;

        // last one
        one = num;
        if (one <= 3) {
            for (int i = 0; i < one; ++i)
                res += 'I';
        }
        else if (one <= 4) {
            res += "IV";
        }
        else if (one <= 8) {
            res += 'V';
            for (int i = 0; i < one - 5; ++i)
                res += 'I';
        }
        else
            res += "IX";
        // end of one

        return res;
        }
};