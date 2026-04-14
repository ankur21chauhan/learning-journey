#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int data;

    TreeNode *left;
    TreeNode *right;

    TreeNode(int val){
        data = val;
        left = right = nullptr;
    }
};

class Solution{
    private:
        int maxGain(TreeNode* root, int& maxSum){
            if(root == NULL){
                return 0;
            }
            int lh = max(0, maxGain(root->left, maxSum));
            int rh = max(0, maxGain(root->right, maxSum));

            int currentPath = lh + root->data+ rh ;
            maxSum = max(maxSum, currentPath);
            return root->data + max(lh, rh);
        }
    public:
        int maxPath(TreeNode* root){
            int maxSum = INT_MIN;
            maxGain(root, maxSum);
            return maxSum;

        }
};

int main() {
    TreeNode* root = new TreeNode(-10);

    root->left = new TreeNode(9);
    root->right = new TreeNode(20);

    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    Solution obj;

    cout << "Maximum Path Sum: " << obj.maxPath(root);

    return 0;
}
