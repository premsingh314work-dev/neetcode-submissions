class Solution {
public:
    int longestConsecutive(vector<int> &nums)
    {
        int MaxLen = 0;
        set<int> numSet(nums.begin(), nums.end());
        for (auto num : numSet)
        {
            if (numSet.find(num - 1) == numSet.end())
            {
                int current = num;
                int local_ml = 1;
                while (numSet.find(current + 1) != numSet.end())
                {
                    current++;
                    local_ml++;
                }
                MaxLen = max(MaxLen, local_ml);
            }
        }
        return MaxLen;
    }
};
