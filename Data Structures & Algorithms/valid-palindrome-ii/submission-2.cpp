class Solution
{

private:
    bool isPalindrome(string s, int right, int left)
    {
        while (right > left)
        {
            if (s[right] == s[left])
            {
                right--;
                left++;
                continue;
            }
            else
                return false;
        }
        return true;
    }

public:
    bool validPalindrome(string s)
    {
        int left = 0;
        int right = s.size() - 1;
        while (right > left)
        {
            if (s[right] == s[left])
            {
                right--;
                left++;
                continue;
            }
            else
            {
                return isPalindrome(s, right, left + 1) ||
                       isPalindrome(s, right - 1, left);
            }
        }
        return true;
    }
};