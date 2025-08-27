#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int val){
        data =val;
        left = NULL;
        right =NULL;
    }
};
int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh,rh)+1;
}
bool isbalanced(Node* root){
    if(root==NULL){
        return true;
    }
    if(isbalanced(root->left) ==false){
        return false;
    }
    if(isbalanced(root->right)==false){
        return false;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    if(abs(lh-rh)<=1) {
       return true;
    }
}
int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    if(isbalanced(root)){
        cout<<"Balanced tree"<<"\n";
    }else{
        cout<<"Unbalanced tree"<<"\n";
    }
    return 0;
}