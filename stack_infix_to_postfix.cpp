#include <bits/stdc++.h>
using namespace std;
// this function check the precedence of the opertors
int prec(char ch)
{
    if (ch == '^')
    {
        return 3;
    }
    else if (ch == '/' || ch == '*')
    {
        return 2;
    }
    else if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
// infix to postfix
string infixToPostfix(string s)
{
    stack<char> st;
    string res = "";
    for (int i = 0; i < s.length(); i++)
    {
        cout<<"s[i] ="<<s[i]<<endl;
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            res += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {

            while ((!st.empty()) && (st.top() != '('))
            {
                res += st.top();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while (!st.empty() && prec(st.top()) > prec(s[i]))
            {
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        //  cout<<st.top()<<endl; 
        }
    }
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    return res;
}
int main()
{

    cout << infixToPostfix("(a+b/c)*(a/k-l)") << endl;
    return 0;
}