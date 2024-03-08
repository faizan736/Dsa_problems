/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
void inOrderTrav(TreeNode *curr, vector<int> &inOrder){
    if(!curr) return;
    inOrderTrav(curr->left, inOrder);
    inOrder.push_back(curr->data);
    inOrderTrav(curr->right, inOrder);
}

void preOrderTrav(TreeNode *curr, vector<int> &preOrder){
    if(!curr) return;
    preOrder.push_back(curr->data);
    preOrderTrav(curr->left, preOrder);
    preOrderTrav(curr->right, preOrder);
}

void postOrderTrav(TreeNode *curr, vector<int> &postOrder){
    if(!curr) return;
    postOrderTrav(curr->left, postOrder);
    postOrderTrav(curr->right, postOrder);
    postOrder.push_back(curr->data);
}

vector<vector<int>> getTreeTraversal(TreeNode *root){
    vector<vector<int>> results;
    vector<int> inOrder;
    vector<int> preOrder;
    vector<int> postOrder;

    inOrderTrav(root, inOrder);
    results.push_back(inOrder);

    preOrderTrav(root, preOrder);
    results.push_back(preOrder);

    postOrderTrav(root, postOrder);
    results.push_back(postOrder);

    return results;
}
