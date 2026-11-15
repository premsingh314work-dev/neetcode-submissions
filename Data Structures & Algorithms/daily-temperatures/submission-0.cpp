class Solution {
public:
        vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        stack<int> Max_temp;
        vector<int> res(temperatures.size());
        for (int i = temperatures.size() - 1; i >= 0; i--)
        {
            while (!Max_temp.empty() && temperatures[i] >= temperatures[Max_temp.top()])
            {
                Max_temp.pop();
            }
            if (!Max_temp.empty())
            {
                res[i] = Max_temp.top() - i;
            }
            Max_temp.push(i);
        }
        return res;
    }
};
