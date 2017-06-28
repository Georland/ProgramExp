#include <iostream>
#include <vector>

using namespace std;

class Solution {
    int count = 0;
    int max = 0;
    int mark = 0;
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int size = nums.size();
        if (size == 0)
            return max;
        for (int i = 0; i < size; ++i) {
            if (nums[i] == 0) {
                if (mark == 1) {
                    mark = 0;
                    if (max < count)
                        max = count;
                    count = 0;
                }
            }
            else if (nums[i] == 1) {
                if (mark == 0) {
                    mark = 1;
                    count += 1;
                }
                else
                    count += 1;
            }
        }
        if (nums[size - 1] == 1 && max < count)
            max = count;
        return max;
    }
};