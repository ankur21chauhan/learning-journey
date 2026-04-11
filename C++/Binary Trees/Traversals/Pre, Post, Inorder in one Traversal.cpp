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
        void FuncprePostInOrderTraversal(TreeNode* root, vector<vector<int>>& arr){
            vector<int> pre;
            vector<int> in;
            vector<int> post;
            if(root == NULL){
                return;
            }
            stack<pair<TreeNode*, int>> st;
            st.push({root,1});

            while(!st.empty()){
                TreeNode* node = st.top().first;
                int state = st.top().second;
                st.pop();

                if(state == 1){
                    pre.push_back(node->data);
                    st.push({node, 2});

                    if(node->left != NULL){
                        st.push({node->left, 1});
                    }
                }

                else if(state == 2){
                    in.push_back(node->data);
                    st.push({node, 3});

                    if(node->right != NULL){
                        st.push({node->right, 1});
                    }
                }

                else{
                    post.push_back(node->data);
                }
            }

            arr.push_back(in);
            arr.push_back(pre);
            arr.push_back(post);
            
        }
    public:
        vector<vector<int>>prePostInOrderTraversal(TreeNode* root){
            vector<vector<int>> arr;
            FuncprePostInOrderTraversal(root, arr);
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
    vector<vector<int>> result = obj.prePostInOrderTraversal(root);

    cout << "Inorder: ";
    for(int val : result[0]){
        cout << val << " ";
    }
    cout << endl;

    cout << "Preorder: ";
    for(int val : result[1]){
        cout << val << " ";
    }
    cout << endl;

    cout << "Postorder: ";
    for(int val : result[2]){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
