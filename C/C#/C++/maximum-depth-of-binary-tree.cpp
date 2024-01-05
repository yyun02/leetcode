/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int depth = 1;
    int maxDepth(TreeNode* root) {
        cout << " depth : " << depth << endl;

        if (root == nullptr){
            cout << " root is null " << endl;
            return 0;
        }

        if (root -> left == nullptr && root->right == nullptr){
            cout << " both leaves null " << endl;
            return depth;
        }

        if (root -> left == nullptr){
            cout << " left null " << endl;
            depth ++;
            maxDepth(root->right);
        }

        else if (root->right == nullptr){
            cout << " right null " << endl;
            depth ++;
            maxDepth(root->left);
        }

        else{
            cout << " no null " << endl;
            depth ++;

            int tem = depth;
            int max_right = maxDepth(root->right);
            depth = tem;
            int max_left = maxDepth(root->left);
            depth = max (max_right, max_left);
        }
    
        return depth;
    }
};
