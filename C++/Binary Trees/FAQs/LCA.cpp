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
    TreeNode* funcLowestCA(TreeNode* root,TreeNode* p, TreeNode* q){
        if(root == nullptr || root == p || root == q){
            return root;
        }
        TreeNode* left = funcLowestCA(root->left, p, q);
        TreeNode* right = funcLowestCA(root->right, p, q);

        if(left == nullptr){
            return right;
        }

        else if(right == nullptr){
            return left;
        }
        else{
            return root;
        }
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return funcLowestCA(root, p, q);
    }
};

int main() {
    TreeNode* root = new TreeNode(3);

    root->left = new TreeNode(5);
    root->right = new TreeNode(1);

    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);

    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);

    root->left->right->left = new TreeNode(7);
    root->left->right->right = new TreeNode(4);

    TreeNode* p = root->left->left;          // 6
    TreeNode* q = root->left->right->right;  // 4

    Solution sol;
    TreeNode* ans = sol.lowestCommonAncestor(root, p, q);

    if(ans != nullptr) {
        cout << "LCA: " << ans->data << endl;
    } else {
        cout << "LCA not found" << endl;
    }

    return 0;
}
