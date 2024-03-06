#include <bits/stdc++.h> 
void sortednum(stack<int> &stack,int val){
	if(stack.empty() || (stack.top()<val)){
		stack.push(val);
		return;
	}
	int num = stack.top();
	stack.pop();
	sortednum(stack,val);
	stack.push(num);
}
void sortStack(stack<int> &stack)
{
	// Write your code here
	if(stack.empty()){
		return;
	}
	int num = stack.top();
	stack.pop();
	sortStack(stack);
	sortednum(stack,num);

}
