int solve(BinaryTreeNode<int> *root,int& sum){
    if(root == NULL){
        return 0;
    }
    int lh = solve(root->left,sum);
    if(lh <  0){
        lh = 0;
    }
    int rh = solve(root->right,sum);
    if(rh <0){
        rh =0;
    }
    sum = max(sum,lh+rh+root->data);
    return root->data+max(lh,rh);
}
int maxPathSum(BinaryTreeNode<int> *root)
{
    // Write your code here
    int sum =INT_MIN;
    solve(root,sum);
    return sum;

}
