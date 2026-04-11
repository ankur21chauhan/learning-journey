#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int data;

    TreeNode *left;
    TreeNode *right;
    TreeNode(int val){
        data = val;
        left = right = NULL;
    }

};

class Solution{
    private:
    void inorderTraversalIterative(TreeNode* root, vector<int>& arr){
        stack<TreeNode*> st;
        while(root != NULL || !st.empty()){
            if(root != NULL){
                st.push(root);
                root = root->left;
            }

            else{
                root = st.top();
                st.pop();
                arr.push_back(root->data);
                root = root->right;
            }
        }

    }
    public:
    vector<int> inorderTraversal(TreeNode* root){
        vector<int> arr;
        inorderTraversalIterative(root, arr);
        return arr;
    }
};

int main(){
    // Creating Tree
    /*
            1
           / \
          2   3
         / \
        4   5
    */

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // Solution object
    Solution obj;

    // Inorder traversal call
    vector<int> result = obj.inorderTraversal(root);

    // Output print
    cout << "Inorder Traversal: ";
    for(int val : result){
        cout << val << " ";
    }

    return 0;
}