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
    // int helper(TreeNode* root , int depth){
    //     if(root == NULL) return 0;
    //     return (max(helper(root->left,depth+1),helper(root->right,depth+1)));
    // }
public:
    int maxDepth(TreeNode* root) {
       
       if(root == NULL ) return 0;
       return 1+max(maxDepth(root->left),maxDepth(root->right));

    }
};
