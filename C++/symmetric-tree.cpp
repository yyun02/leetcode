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
bool isSameTree(TreeNode* p, TreeNode* q) {

    if (p == nullptr && q == nullptr ){
        return true;
    }

    if (p == nullptr || q == nullptr ){
        return false;
    }


    if (q->val != p->val){
        return false;
    }

    return isSameTree (p->left, q->right) && isSameTree (p->right, q->left);
}


class Solution {
public:
    bool isSymmetric(TreeNode* root) {

        TreeNode* p = root -> left;
        TreeNode* q = root -> right;

        if (p == nullptr && q == nullptr ){
            return true;
        }

        if (p == nullptr || q == nullptr ){
            return false;
        }

        if(p->val != q->val ){
            return false;
        }

        return isSameTree (p->left, q->right) && isSameTree (p->right, q->left);
        
    }
};
