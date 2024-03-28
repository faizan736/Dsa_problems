class Solution {
  public:
    int TotalCount(struct Node* tree){
        if(tree == NULL){
            return 0;
        }
        int left = TotalCount(tree->left);
        int right = TotalCount(tree->right);
        return 1 + left + right;
    }
    bool isCBT(struct Node* tree ,int i ,int count){
        if(tree == NULL){
            return true;
        }
        if(i >= count){
            return false;
        }
        else{
            int left  = isCBT(tree->left ,2*i+1,count);
            int right  = isCBT(tree->right,2*i+2,count);
            
            return (left && right);
        }
    }
    bool isMaxHeap(struct Node* tree){
        if(tree->left == NULL && tree->right == NULL){
            return true;
        }
        //in heap we insert ele from left if right is null we check is left following cbt
        if(tree->right == NULL){
            return (tree->data > tree->left->data);
        }
        else{
            bool left = isMaxHeap(tree->left);
            bool right = isMaxHeap(tree->right);
            return(left && right &&
                    tree->data > tree->left->data &&
                    tree->data > tree->right->data);
        }
    }
    bool isHeap(struct Node* tree) {
        // code here
        int index =0;
        int NodeCount  = TotalCount(tree);
        if(isCBT(tree,index,NodeCount) && isMaxHeap(tree)){
            return true;
        }
        else{
            return false;
        }
    }
};
