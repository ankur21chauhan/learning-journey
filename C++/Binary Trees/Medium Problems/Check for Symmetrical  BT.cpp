#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
     int data;
     TreeNode *left;
     TreeNode *right;
      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
};
 

class Solution {
private:
    bool isMirror(TreeNode* leftNode,TreeNode* rightNode){
        if(leftNode == nullptr && rightNode == nullptr){
            return true;
        }
        if((leftNode == nullptr && rightNode != nullptr) || (leftNode != nullptr && rightNode == nullptr)){
            return false;
        }
        if(leftNode->data != rightNode->data){
            return false;
        }

        
        return isMirror(leftNode->left, rightNode->right) && isMirror(leftNode->right, rightNode->left);
        
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr){
            return false;
        }
        return isMirror(root->left, root->right);
    }
};

int main() {
    /*
            1
          /   \
         2     2
        / \   / \
       3   4 4   3
    */

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(2);

    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);

    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);

    Solution obj;

    if (obj.isSymmetric(root)) {
        cout << "Tree is Symmetric" << endl;
    } else {
        cout << "Tree is not Symmetric" << endl;
    }

    return 0;
}
