/************************************************************

    Following is the Binary Tree node structure:

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode()
        {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
void TravsereLeft(TreeNode<int> *root,vector<int>&ans){
    if(root == NULL){
        return ;
    }
    if(root->left == NULL && root->right == NULL){
        return;
    }
    ans.push_back(root->data);
    if(root->left){
        TravsereLeft(root->left,ans);
    }
    else{
        TravsereLeft(root->right,ans);
    }
}
void TravserseLeaf(TreeNode<int> *root,vector<int>&ans){
    if(root == NULL){
        return ;
    }
    if (root->left == NULL && root->right == NULL) {
        ans.push_back(root->data);
        return;
    }
     TravserseLeaf(root->left,ans);
      TravserseLeaf(root->right,ans);
}
void TravserseRight(TreeNode<int> *root,vector<int>&ans){
    if(root == NULL){
        return ;
    }
    if(root->left == NULL && root->right == NULL){
        return;
    }

    if(root->right){
        TravserseRight(root->right,ans);
    }
    else{
        TravserseRight(root->left,ans);
    }
    ans.push_back(root->data);
}
vector<int> traverseBoundary(TreeNode<int> *root)
{
	// Write your code here.
    vector<int>ans;
    if(root == NULL){
        return ans;
    }
    ans.push_back(root->data);
    TravsereLeft(root->left,ans);
    TravserseLeaf(root,ans);
    TravserseRight(root->right,ans);
    return ans;
}
