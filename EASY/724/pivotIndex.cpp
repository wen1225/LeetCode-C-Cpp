class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if (nums.size() == 0)
            return -1;
        else {
            int leftSum = 0;
            int rightSum = 0;
            //Sum all the right values from the first potential index
            for (int i = 1; i < nums.size(); i++) {
                rightSum += nums[i];
            }
            
            for (int i = 0; i < nums.size(); i++) {
                if (leftSum == rightSum)
                    return i;
                else {
                    leftSum += nums[i];
                    rightSum -= nums[i+1];
                }
            }
            return -1;
        }
    }
};
