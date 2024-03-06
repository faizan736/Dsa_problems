void insertatbottom(stack<int> &stack,int element){
    if(stack.empty()){
        stack.push(element);
        return;
    }
    int num = stack.top();
    stack.pop();
    insertatbottom(stack,element);
    stack.push(num);
}
void reverseStack(stack<int> &stack) {
    // Write your code here
    if(stack.empty()){
        return ;
    }
    int num = stack.top();
    stack.pop();

    reverseStack(stack);
    insertatbottom(stack,num);
}
