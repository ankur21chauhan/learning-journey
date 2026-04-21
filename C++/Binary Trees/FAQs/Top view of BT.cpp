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
    public:
    vector<int> topView(TreeNode *root){
        vector<int>ans;
        if(root == nullptr){
            return ans;
        }
        map<int, int>mpp;
        queue<pair<TreeNode*, int>>que;
        que.push({root, 0});
        while(!que.empty()){
            auto it = que.front();
            que.pop();

            TreeNode* node = it.first;
            int line = it.second;

            if(mpp.find(line) == mpp.end()){
                mpp[line] = node->data;
            }

            if(node->left != nullptr){
                que.push({node->left, line - 1});
            }

            if(node->right != nullptr){
                que.push({node->right, line + 1});
            }
        }
        for(auto it : mpp){
            ans.push_back(it.second);
        }
        return ans;

    }
};

int main(){

/*
        1
       / \
      2   3
     / \   \
    4   5   6
*/

TreeNode* root = new TreeNode(1);
root->left = new TreeNode(2);
root->right = new TreeNode(3);
root->left->left = new TreeNode(4);
root->left->right = new TreeNode(5);
root->right->right = new TreeNode(6);

Solution obj;
vector<int> result = obj.topView(root);

// print output
for(int val : result){
    cout << val << " ";
}
cout << endl;

return 0;

}