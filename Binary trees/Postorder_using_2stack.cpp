vector<int> postorderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int>ans;
    if(root == NULL){
        return ans;
    }
    stack<TreeNode*>s1;
    stack<TreeNode*>s2;
    s1.push(root);
    while(!s1.empty()){
        TreeNode* curr = s1.top();
        s1.pop();
        s2.push(curr);
        if(curr->left){
            s1.push(curr->left);
        }
        if(curr->right){
            s1.push(curr->right);
        }
    }
    while(!s2.empty()){
        ans.push_back(s2.top()->data);
        s2.pop();
    }
    return ans;
}

//iterative approach
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root == NULL){
            return ans;
        }
        stack<TreeNode*>s;
        s.push(root);

        while(!s.empty()){
            TreeNode* curr = s.top();
            ans.push_back(curr->val);
            s.pop();
            if(curr->right != NULL){
                s.push(curr->right);
            }
            if(curr->left != NULL){
                s.push(curr->left);
            }
           
        }
        return ans;
    }
};
