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
        void preorderTraveralIterative(TreeNode* root, vector<int>& arr){
            stack<TreeNode*> st;
            st.push(root);
            while(!st.empty()){
                TreeNode* node = st.top();
                st.pop();
                arr.push_back(node->data);
                if(node->left != NULL){
                    st.push(node->left);
                }
                if(node->right != NULL){
                    st.push(node->right);
                }
            }   
        }
    public:
        vector<int> preorderTraversal(TreeNode* root){
            vector<int> arr;
            preorderTraveralIterative(root, arr);
            return arr;
        }
};

int main(){
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

    Solution obj;

    vector<int> result = obj.preorderTraversal(root);

    cout << "Iterative Preorder Traversal: ";
    for(int val : result){
        cout << val << " ";
    }

    return 0;
}