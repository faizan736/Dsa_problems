#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    stack<int>temp;
    while(!myStack.empty()){
        int ans = myStack.top();
        myStack.pop();
        temp.push(ans);
    }
    myStack.push(x);
    while(!temp.empty()){
        int ans = temp.top();
        temp.pop();
        myStack.push(ans);
    }
    return myStack;
}

//method2-recursion
#include <bits/stdc++.h> 
void solve(stack<int>& myStack, int x){
    if(myStack.empty()){
        myStack.push(x);
        return ;
    }
    int num = myStack.top();
    myStack.pop();
    solve(myStack,x);
    myStack.push(num);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
  solve(myStack,x);
  return myStack;
}

