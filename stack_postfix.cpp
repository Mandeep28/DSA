#include <bits/stdc++.h>
using namespace std;

int postfixEvalution(string s)
{
    stack<int> st;
    for (int i = 0; i < s.length(); i++)
    {
        // cout<<"s[i] ="<<s[i]<<endl;  // for debugging 
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();

            // switch
            switch (s[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op2 - op1);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                st.push(op2 / op1);
                break;
            case ('^'):
                st.push(pow(op1, op2));
                break;

            default:
                break;
            }
        }
        // cout<<st.top()<<endl;  // for debugging 
    }
    return (st.top());
}

int main()
{
    cout<<postfixEvalution("46+2/5*7+")<<endl;

    return 0;
}