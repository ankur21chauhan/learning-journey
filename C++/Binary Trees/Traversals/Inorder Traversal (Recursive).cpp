#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        data = val;
        left = right =NULL;
    }

};

class Solution{
    private:
       void recursiveInorder(TreeNode* node, vector <int>& arr){
            if(node == NULL){
                return;
            }
            recursiveInorder(node->left, arr);
            arr.push_back(node->data);

            recursiveInorder(node->right, arr);
        }

    public:
        vector<int> inorderTraversal(TreeNode* node){
            vector<int> arr;
            recursiveInorder(node, arr);
            return arr;
        }
};


#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        data = val;
        left = right = NULL;
    }
};

class Solution{
private:
    void recursiveInorder(TreeNode* node, vector<int>& arr){
        if(node == NULL){
            return;
        }
        recursiveInorder(node->left, arr);
        arr.push_back(node->data);
        recursiveInorder(node->right, arr);
    }

public:
    vector<int> inorderTraversal(TreeNode* node){
        vector<int> arr;
        recursiveInorder(node, arr);
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
    vector<int> result = obj.inorderTraversal(root);

    cout << "Inorder Traversal: ";
    for(int val : result){
        cout << val << " ";
    }

    return 0;
}