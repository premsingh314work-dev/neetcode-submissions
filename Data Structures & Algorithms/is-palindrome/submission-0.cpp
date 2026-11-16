class Solution {
public:
    bool isPalindrome(string s)
{
    string tempStr;
    for (char c : s)
    {
        if (isalnum(c))
        {
            tempStr += tolower(c);
        }
    }
    int i = 0;
    int j = tempStr.size() - 1;
    while (j > i)
    {
        if (tempStr[i] != tempStr[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
};
