#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int data;

    TreeNode *left;
    TreeNode *right;

    TreeNode(int value){
        data = value;
        left = right = NULL;
    }
};  


class Solution{

    private:
        void levelOrderTraversal(TreeNode* root, vector<vector<int>>& arr){
            if(root == NULL){
                return;
            }
            queue<TreeNode*> que;
            que.push(root);
            while(!que.empty()){
                int size = que.size();
                vector<int> level;
                for(int i = 0 ; i<= size-1; i++){
                    TreeNode* node = que.front();
                    que.pop();

                    level.push_back(node->data);

                    if(node->left != NULL){
                        que.push(node->left);
                    }
                    if(node->right != NULL){
                        que.push(node->right);
                    }
                }

                arr.push_back(level);

            }
        }
    public:
        vector<vector<int>> levelOrder(TreeNode* root){
            vector<vector<int>> arr;
            levelOrderTraversal(root, arr);
            return arr;

        }
};










/*
        1                          level 0 = 1              nodes in the level  = 2^level 
       / \
      2   3                        level 1 = 2
     / \ / \  
     4 5 6 7                       level 2 = 4        [[1],[2,3],[4,5,6,7]] 
     
     
     
     
     
     
     
     
     
     
     
     [1], [2,3]
*/

int main(){
    /*
            1
           / \
          2   3
         / \ / \
        4  5 6  7
    */

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    Solution obj;
    vector<vector<int>> result = obj.levelOrder(root);

    cout << "Level Order Traversal:" << endl;
    for(int i = 0; i < result.size(); i++){
        cout << "Level " << i << ": ";
        for(int value : result[i]){
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}
