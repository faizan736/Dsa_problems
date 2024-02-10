/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *left, *right;
    Node()
    {
        this->data = 0;
        left = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->left = NULL;
        this->right = NULL;
    }
    Node(int data, Node* left, Node* right)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};
*/

Node* createTree(vector<int>&arr,int index =0){
    // Write your code here.
    if(index>=arr.size()){

        return NULL;

    }

    Node* root=new Node(arr[index]);

 

    root->left=createTree(arr,(2*index)+1);

    root->right=createTree(arr,(2*index)+2);

 

    return root;

}
