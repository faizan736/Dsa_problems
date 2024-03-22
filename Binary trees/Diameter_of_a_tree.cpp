int solve(TreeNode<int> *root,int& maxi){
     if(root == NULL){
        return 0;
    }
    int lh = solve(root->left,maxi);
    int rh =solve(root->right,maxi);
    maxi = max(maxi,lh+rh);
    return 1+max(lh,rh);
}
int diameterOfBinaryTree(TreeNode<int> *root){
	// Write Your Code Here.
   int maxi =0;
    solve(root,maxi);
   return maxi;
    
}
//diameter is equal to longest path from one point to another point
