#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int data;
    TreeNode *left;
    TreeNode* right;

    TreeNode(int val){
        data = val;
        left = right = NULL;
    }
};

class Solution{
    public:
        bool isSame(TreeNode* root1, TreeNode* root2){
            if(root1 == NULL && root2 == NULL){
                return true;
            }
            if((root1 == NULL && root2 != NULL) || (root1 != NULL && root2 == NULL)){
                return false;
            }
            if(root1->data != root2->data){
                return false;
            }

            bool leftSame = isSame(root1->left,root2->left);
            bool rightSame = isSame(root1->right, root2->right);

            return leftSame && rightSame;
        }
};

int main() {
    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);

    TreeNode* root2 = new TreeNode(1);
    root2->left = new TreeNode(2);
    root2->right = new TreeNode(3);

    Solution obj;

    if(obj.isSame(root1, root2)) {
        cout << "Trees are Identical";
    } else {
        cout << "Trees are Not Identical";
    }

    return 0;
}
