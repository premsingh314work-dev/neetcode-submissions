class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> nums;
        char op;
        int answer;
        for (const auto &c : tokens)
        {
            if (c == "+" || c == "-" || c == "*" || c == "/")
            {
                int b = nums.top();
                nums.pop();

                int a = nums.top();
                nums.pop();

                op = c[0];
                switch (op)
                {
                case '+':
                    answer = a + b;

                    break;
                case '-':
                    answer = a - b;
                    break;
                case '*':
                    answer = a * b;
                    break;
                case '/':
                    if (b == 0)
                    {
                        cout << "cannot devide with one error" << endl;
                        break;
                    }
                    answer = a / b;
                    break;
                }
                nums.push(answer);
            }
            if (c != "+" && c != "-" && c != "*" && c != "/")
            {
                nums.push(stoi(c));
            }
        }
            return nums.top();
    }
};