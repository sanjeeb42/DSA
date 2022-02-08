#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char temp = s[i];
        if (temp == '(' or temp == '{' or temp == '[')
        {
            st.push(temp);
        }
        else if (temp == ')')
        {

            if (st.empty() == false)
            {
                return false;
            }
            char stacktop = st.top();
            st.pop();
            if (stacktop != '(')
            {
                return false;
            }
        }

        else if (temp == '}')
        {
            if (st.empty() == false)
            {
                return false;
            }

            char stacktop = st.top();
            st.pop();
            if (stacktop != '{')
            {
                return false;
            }
        }

        else if (temp == ']')
        {

            if (st.empty() == false)
            {
                return false;
            }

            char stacktop = st.top();
            st.pop();
            if (stacktop != '[')
            {
                return false;
            }
        }
    }
}
int main()
{

    string s = "(){}[]";
    isValid(s);

    return 0;
}
