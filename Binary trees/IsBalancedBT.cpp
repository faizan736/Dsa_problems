/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val)
        {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int solve(TreeNode<int>* root){
    if(root == NULL){
        return 0;
    }
    int lh = solve(root->left);
    if(lh == -1) return -1;
    int rh = solve(root->right);
    if(rh == -1) return -1;
    if(abs(lh-rh) >1 ) return -1;
    return max(lh,rh)+1;
}
bool isBalancedBT(TreeNode<int>* root){
    // Write your code here.
    if(solve(root) == -1){
        return false;
    }
    else{
        return true;
    }
}
