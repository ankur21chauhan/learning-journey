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
        long long int funcWidthOfBT(TreeNode* root){
            
            if(root == nullptr){
                return 0;
            }
            queue<pair<TreeNode*, long long int>> que;
            que.push({root, 0});

            
            long long int maxWidth = 0;
            while(!que.empty()){
                int levelSize = que.size();
                long long int baseIndex = que.front().second; //first node index
                long long int first = 0;
                long long int last = 0;
                for(int i = 0; i < levelSize; i++){
                    TreeNode* node = que.front().first; // new node
                    long long int currentIndex = que.front().second - baseIndex; // normalized index of new node 
                    que.pop();
                    
                    if(i == 0){
                        first = currentIndex;
                    }

                    if(i == levelSize - 1){
                        last = currentIndex;
                    }

                    if(node->left != nullptr){
                        que.push({node->left, 2* currentIndex +1});
                    }

                    if(node->right != nullptr){
                        que.push({node->right, 2 * currentIndex + 2});
                    }

                   

                }
                long long int width = (last - first) + 1;
                maxWidth = max(maxWidth, width);
            }

            return maxWidth;

            
        }
    public:
        long long int widthOfBT(TreeNode* root){
            return funcWidthOfBT(root);
        }
};


int main() {
    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(3);
    root->right = new TreeNode(2);

    root->left->left = new TreeNode(5);
    root->right->right = new TreeNode(9);

    Solution sol;
    cout << "Maximum Width: " << sol.widthOfBT(root) << endl;

    return 0;
}

