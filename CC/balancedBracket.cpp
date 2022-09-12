// using stack check if the brakcets are balanced or not
#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (st.empty() || st.top() != '(')
            {
                return false;
            }
            st.pop();
        }
        else if (s[i] == '}')
        {
            if (st.empty() || st.top() != '{')
            {
                return false;
            }
            st.pop();
        }
        else if (s[i] == ']')
        {
            if (st.empty() || st.top() != '[')
            {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}

int main()
{
    string s;
    cin >> s;
    if (isBalanced(s))
    {
        cout << "Balanced";
    }
    else
    {
        cout << "Not Balanced";
    }
    return 0;
}