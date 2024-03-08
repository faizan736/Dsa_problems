#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;
    
    node(int d){
        this->data =d;
        this->left = NULL;
        this->right = NULL;
    }
};
node* bulidtree(node* root){
    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;

    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"Enter the left most element "<<data<<endl;
    root->left = bulidtree(root->left);
    cout<<"Enter the right most element "<<data<<endl;
    root->right = bulidtree(root->right);
    return root;
}
void levelordertravesel(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }

}
void inorder(node* root){
    if(root == NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}  
void preorder(node* root){
    if(root == NULL){
        return ;
    }
    cout<<root->data<<" ";
    inorder(root->left);
    inorder(root->right);
}

void postorder(node* root){
    if(root == NULL){
        return ;
    }
    inorder(root->left);
    inorder(root->right);
    cout<<root->data<<" ";
}  

int main(){
    node* root = NULL;
    root = bulidtree(root);
    levelordertravesel(root);
    cout<<"Inorder traversal"<<endl;
    inorder(root);
    cout<<endl;
    cout<<"preorder traversal"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"postorder traversal"<<endl;
    postorder(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
  
    return 0;
}
