class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = nums.size() - 1;
        int j = 0;
        while (i > j) {
            int sum = nums[i] + nums[j];
            if (sum == target) {
                return {j + 1, i + 1};
            } else if (sum > target) {
                i--;
            } else {
                j++;
            }
        }
        return {};
    }
};