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
        vector<vector<int> > verticalTraversal(TreeNode* root) {
    	    map<int, map<int, multiset<int>>>nodes;
            queue<pair<TreeNode*, pair<int, int>>>todo;
            todo.push({root, {0,0}});
            while(!todo.empty()){
                auto p = todo.front();
                todo.pop();

                TreeNode* node = p.first;
                int x = p.second.first, y = p.second.second;
                nodes[x][y].insert(node->data);

                if(node->left){
                    todo.push({node->left,{x-1, y + 1}});
                }

                if(node->right){
                    todo.push({node->right, {x+1, y+1}});
                }
            }
            vector<vector<int>> ans;
            for(auto p : nodes){
                vector<int>col;
                for(auto q : p.second){
                    col.insert(col.end(), q.second.begin(), q.second.end());
                }
                ans.push_back(col);
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

solution obj;
vector<vector<int>> result = obj.verticalTraversal(root);

// print output
for(auto &col : result){
    for(auto val : col){
        cout << val << " ";
    }
    cout << endl;
}

return 0;

}