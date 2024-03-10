//method1 using levelorder
int heightOfBinaryTree(TreeNode<int> *root)
{
	// Write your code here.
    int count =0;
    queue<TreeNode<int>*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        TreeNode<int>* temp = q.front();
        q.pop();
        if(temp == NULL){
            count++;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
    return count;
}

//method2
int heightOfBinaryTree(TreeNode<int> *root)
{
	// Write your code here.
    if(root == NULL){
        return 0;
    }
    int lh = heightOfBinaryTree(root->left);
    int rh = heightOfBinaryTree(root->right);
    return 1+max(lh,rh);
}
