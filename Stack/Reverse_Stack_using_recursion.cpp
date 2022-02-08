/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;
void insertatbottom(stack<int>&stack,int x){
     if(stack.empty()){
        stack.push(x);
         return;
     }
    int temp=stack.top();
    stack.pop();
    insertatbottom(stack,x);
    stack.push(temp);  
}
void helper(stack<int> &stack){
    if(stack.empty()==true){
        return;
    } 
 int x=stack.top();
    stack.pop();
    helper(stack);
    insertatbottom(stack,x);
}
void reverseStack(stack<int> &stack) {
    
     helper(stack);
    
}

int main(){
    stack<int>s;
    s.push(3);
    s.push(4);
    s.push(7);
    s.push(9);
    reverseStack(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    `   2
    return 0;
    
}
