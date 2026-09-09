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
    bool ans=true;
    bool isBalanced(TreeNode* root) {
        if(maxheight(root)==-1){
            return false;
        }
        return true;
    }
    int maxheight(TreeNode*root){
        if(root==NULL){
            return 0;
        }
        int lh=maxheight(root->left);
        if(lh==-1){
            return -1;
        }
        int rh=maxheight(root->right);
        if(rh==-1){
            return -1;
        }
        int diff=abs(lh-rh);
        if(diff>1){
            return -1;
        }
        return max(lh,rh)+1;
    }
};
