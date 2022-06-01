#include<bits/stdc++.h>
using namespace std;

 class node{
    public:
    int data;
    node* left;
    node* right;
    // conor 
    node(int data) {
       this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
void preorder( node* root) {
    // logic is root left right 
    // answer is 1 2 4 5 3 6 7 
    if(root ==NULL) {
     
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node* root) {
    if(root ==NULL) {
    
        return;
    }
    // logic is left root right 
    // answer is 4 2 5 1 5 3 7 
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(node* root) {
    if(root == NULL) {
        cout<<endl;
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}
/*
     1
    /  \ 
   2     3
  / \   /  \
4    5 6    7   

*/

int main() {
    // creating binary tree 
     node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7); 

    // inorder 
    cout<<"preorder traversal:"<<endl;
    preorder(root);
    cout<<"inorder traversal:"<<endl;
    inorder(root);
    cout<<"Postorder traversal:"<<endl;
    postorder(root);
    return 0;
}