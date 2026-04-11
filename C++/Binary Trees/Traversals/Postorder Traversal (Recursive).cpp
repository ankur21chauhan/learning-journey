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
        void postorderTraversal(TreeNode* root, vector<int>& arr){
            if(root == NULL){
                return;
            }
                postorderTraversal(root->left,arr);
                postorderTraversal(root->right, arr);

                arr.push_back(root->data);
    
        }
	public:
		vector<int> postorder(TreeNode* root){
	        vector<int> arr;
            postorderTraversal(root, arr);
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

    vector<int> result = obj.postorder(root);

    cout << "Postorder Traversal: ";
    for(int val : result){
        cout << val << " ";
    }

    return 0;
}