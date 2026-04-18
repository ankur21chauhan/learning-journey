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
        void markParents(TreeNode* root, unordered_map<TreeNode*, TreeNode*>& parent_map){
            queue<TreeNode*>que;
            que.push(root);
            while(!que.empty()){

                TreeNode* node = que.front();
                que.pop();

                if(node->left){
                    parent_map[node->left] = node;
                    que.push(node->left);
                }

                if(node->right){
                    parent_map[node->right] = node;
                    que.push(node->right);
                }
                
            }

        }

        vector<int> distanceK(TreeNode* root, TreeNode* target, int k){
            vector<int> ans;
            if(root == nullptr || target == nullptr){
                return ans;
            }
            unordered_map<TreeNode*, TreeNode*> parent_map;
            markParents(root, parent_map);

            unordered_map<TreeNode*, bool> visited;
            queue<TreeNode*> que;

            que.push(target); 
            visited[target] = true;

            int distance = 0;

            while(!que.empty()){
                int size = que.size();

                if(distance == k){
                    break;
                }

                distance++;

                for(int i = 0; i < size; i++){
                    TreeNode* node = que.front();
                    que.pop();

                    if(node->left && !visited[node->left]){
                        que.push(node->left);
                        visited[node->left] = true;
                    }

                    if(node->right && !visited[node->right]){
                        que.push(node->right);
                        visited[node->right] = true;
                    }

                    if(parent_map.count(node) && !visited[parent_map[node]]){
                        que.push(parent_map[node]);
                        visited[parent_map[node]] = true;
                    }
                }
            }

            while(!que.empty()){
                TreeNode* node = que.front();
                que.pop();

                ans.push_back(node->data);
            }

            return ans;


    }
};


int main() {
    /*
            3
          /   \
         5     1
        / \   / \
       6   2 0   8
          / \
         7   4
    */

    TreeNode* root = new TreeNode(3);

    root->left = new TreeNode(5);
    root->right = new TreeNode(1);

    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);

    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);

    root->left->right->left = new TreeNode(7);
    root->left->right->right = new TreeNode(4);

    TreeNode* target = root->left;  // target = 5
    int k = 2;

    Solution sol;
    vector<int> ans = sol.distanceK(root, target, k);

    for (int val : ans) {
        cout << val << " ";
    }

    return 0;
}


