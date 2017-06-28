#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
    int size = 0;
    vector<int> vec;
    vector<int> sign;
    
public:
    int romanToInt(string s) {
       size = s.size();
       int res = 0;

       // start from 
       for (int i = 0; i < size; ++i) {
           if (s[i] == 'I') {
               vec.push_back(1);
           }
           else if (s[i] == 'V') {
               vec.push_back(5);
           }
           else if (s[i] == 'X') {
               vec.push_back(10);
           }
           else if (s[i] == 'L') {
               vec.push_back(50);
           }
           else if (s[i] == 'C') {
               vec.push_back(100);
           }
           else if (s[i] == 'D') {
               vec.push_back(500);
           }
           else if (s[i] == 'M') {
               vec.push_back(1000);
           }
       }

       cout << vec.size() << endl;

       for (int i = 0; i < size; ++i) {
           if (i + 1 < size) {
               if (vec[i] < vec[i + 1])
                   sign.push_back(-1);
               else
                   sign.push_back(1);
           } else {
               sign.push_back(1); 
           }
       }


       cout << sign.size() << endl;

       for (int i = 0; i < size; ++i) {
          res += vec[i]*sign[i];
       }

       return res;
    }
};