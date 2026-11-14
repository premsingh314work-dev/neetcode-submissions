#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class MinStack
{
public:
    stack<int> stk;
    vector<int> minelementsIndex;
    int i = -1;
    MinStack()
    {
    }
    // 10,1,6,-19   10,1
    void push(int val)
    {
        if (i == -1)
        {
            stk.push(val);
            minelementsIndex.push_back(val);
            i++;
            return;
        }
        int localminval = min(minelementsIndex[i], val);
        if (val > localminval)
        {
            stk.push(val);
            return;
        }

        minelementsIndex.push_back(val);
        i++;
        stk.push(val);
        return;
    }

    void pop()
    {
        if (stk.empty())
        {
            cout << "No element to pop {Underflow}";
            return;
        }
        if (stk.top() != minelementsIndex[i])
        {
            stk.pop();
            return;
        }
        else if (stk.top() == minelementsIndex[i])
        {
            minelementsIndex.pop_back();
            i--;
            stk.pop();
            return;
        }
    }

    int top()
    {
        cout << stk.top() << endl;
        return stk.top();
    }

    int getMin()
    {
        cout << minelementsIndex[i] << endl;
        return minelementsIndex[i];
    }
};