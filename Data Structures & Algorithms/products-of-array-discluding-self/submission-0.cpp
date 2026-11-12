class Solution {
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> prefix;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i != 0)
            {
                int a = nums[i - 1] * prefix[i - 1];
                prefix.push_back(a);
                continue;
            }
            prefix.push_back(1);
        }
        vector<int> suffix;
        int j = 0;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (i != nums.size() - 1)
            {
                int a = nums[i + 1] * suffix[j - 1];
                suffix.push_back(a);
                j++;
                continue;
            }
            suffix.push_back(1);
            j++;
        }
        vector<int> res;
        int i = 0;
        int k = suffix.size() - 1;
        while (i != nums.size())
        {
            res.push_back(prefix[i] * suffix[k]);
            i++;
            k--;
        }
        return res;
    }
};
