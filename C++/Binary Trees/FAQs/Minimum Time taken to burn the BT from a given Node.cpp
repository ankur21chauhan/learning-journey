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

class solution{
    public:
        TreeNode* markParentAndFindTarget(TreeNode* root, unordered_map<TreeNode*, TreeNode*>& parent, int start){

            queue<TreeNode*> que;
            que.push(root);
            TreeNode* targetNode = nullptr;
            while(!que.empty()){
                TreeNode* node = que.front();
                que.pop();

                if(node->data == start){
                    targetNode = node;
                }
                if(node->left){
                    parent[node->left] = node;
                    que.push(node->left);
                }
                if(node->right){
                    parent[node->right] = node;
                    que.push(node->right);
                }
            }
            return targetNode;
        }
		int timeToBurnTree(TreeNode* root, int start){
            if(root == nullptr){
                return 0;
            }
            
            unordered_map<TreeNode*, TreeNode*>parent;
            TreeNode* targetNode = markParentAndFindTarget(root, parent, start);
            
            if(targetNode == nullptr){
                return 0;
            }

            unordered_map<TreeNode*, bool>visited;
            queue<TreeNode*> que;
            que.push(targetNode);
            visited[targetNode] = true;

            int time = 0;
            
            while(!que.empty()){
                int levelSize = que.size();
                bool burnSomethingNew = false;

                for(int  i = 0; i < levelSize; i++){
                    TreeNode* node = que.front();
                    que.pop();

                    if(node->left && !visited[node->left]){
                        que.push(node->left);
                        visited[node->left] = true;
                        burnSomethingNew = true;
                    }
                    
                    if(node->right && !visited[node->right]){
                        que.push(node->right);
                        visited[node->right] = true;
                        burnSomethingNew = true;
                    }

                    if(parent.count(node) && !visited[parent[node]]){
                        que.push(parent[node]);
                        visited[parent[node]] = true;
                        burnSomethingNew = true;
                    }
                    
                }

                if(burnSomethingNew){
                    time++;
                }
                

            }
            return time;
        }
            
};

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);
    root->right->right->right = new TreeNode(7);

    solution obj;
    int start = 2;

    cout << obj.timeToBurnTree(root, start) << endl;

    return 0;
}
