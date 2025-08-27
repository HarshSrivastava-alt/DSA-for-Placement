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
int calHeight(Node* root){
    if(root==NULL)
    return 0;
    int lheight = calHeight(root->left);
    int rheight = calHeight(root->right);
    return max(lheight,rheight) + 1;
}
int calDiameter(Node* root){
    if(root==NULL){
        return 0;
    }
    int lheight = calHeight(root->left);
    int rheight = calHeight(root->right);
    int curDiameter = lheight + rheight +1 ;

    int lDiameter = calDiameter(root->left);
    int rDiameter = calDiameter(root->right);

    return max(curDiameter,max(lDiameter,rDiameter));
}
int main(){  
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7); 
    cout<<calDiameter(root)<<" ";
    return 0; 
}