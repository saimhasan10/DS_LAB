#include <bits/stdc++.h>
using namespace std;

bool is_valid(string s)
{
    stack<char> st;
    for (char c : s)
    {
        // push the opening bracket
        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }

        else
        {
            // if at first there is not opening bracket then return false
            if (st.empty())
            {
                return false;
            }
            else
            {
                if (c == ')' && st.top() == '(')
                {
                    st.pop();
                }
                else if (c == '}' && st.top() == '{')
                {
                    st.pop();
                }
                else if (c == ']' && st.top() == '[')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
    }
    // by default it returns true if it is empty
    return st.empty();
}

int main()
{
    string ch;
    getline(cin, ch);
    cout << ch << endl;

    if (is_valid(ch))
    {
        cout << "valid expression" << endl;
    }
    else
    {
        cout << "invalid expression" << endl;
    }

    return 0;
}
