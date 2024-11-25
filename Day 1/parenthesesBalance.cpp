using namespace std;
#include <bits/stdc++.h>
bool check(const string &s)
{

    stack<char> stk;
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            stk.push(s[i]);
        }

        else
        {
            if (!stk.empty() &&
                ((stk.top() == '(' && s[i] == ')') ||
                 (stk.top() == '{' && s[i] == '}') ||
                 (stk.top() == '[' && s[i] == ']')))
            {
                stk.pop();
            }
            else
            {
                return false;
            }
        }
    }

    return stk.empty();
}

int main()
{

    string s;
    cout << "enter input" << endl;
    cin >> s;

    if (check(s))
        cout << "true \n";
    else
        cout << "false \n";
    return 0;
}