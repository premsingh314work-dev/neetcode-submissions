class Solution {
public:
    int maxArea(vector<int> &height)
    {
        int n = height.size();
        int right = n - 1;
        int MaxWater = 0;
        int left = 0;
        while (left < right)
        {
            int w = right - left;
            int h = min(height[left], height[right]);
            int area = w * h;
            MaxWater = max(area, MaxWater);
            if (height[left] > height[right])
            {
                right--;
                continue;
            }
            else
            {
                left++;
                continue;
            }
        }
        return MaxWater;
    }
};
