#include <algorithm>
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int element = 0;
        for (auto i : nums) {
            element ^= i;
        }
        return element;
    }
};
