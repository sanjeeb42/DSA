#include <bits/stdc++.h>
using namespace std;

void sortedInsert(stack<int> &s, int curr)
{
    //base case
    if (s.empty()==true or (s.empty()==false && s.top() < curr ))
    {
        s.push(curr);
        cout<<endl;
        return;
    }
    int temp = s.top();
    s.pop();
    sortedInsert(s, curr);
    s.push(temp);
}
void sortStack(stack<int> &s)
{
    //Base case
    
    if (s.empty() == true)
    {
        return;
    }
    
    int temp = s.top();
    s.pop();
    sortStack(s);
    sortedInsert(s, temp);
}

void helper(stack<int>&s){
    sortStack(s);
    while(s.empty()==false){
        cout<<s.top()<<" ";
        s.pop();
    }
}

int main()
{
    stack<int> s;
    s.push(-2);
    s.push(5);
    s.push(7);
    s.push(-9);
    s.push(3);

    helper(s);
    

    return 0;
}
