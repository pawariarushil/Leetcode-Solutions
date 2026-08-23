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
    int maxi=INT_MIN;
    int findsum(TreeNode*root){
        if(!root){
            return 0;
        }
        int sumlh=findsum(root->left);
        int sumrh=findsum(root->right);
        sumlh=max(sumlh,0);
        sumrh=max(sumrh,0);
        if(sumlh+sumrh+root->val>maxi){
            maxi=sumlh+sumrh+root->val;
        }
        return root->val+max(sumlh,sumrh);
    }
    int maxPathSum(TreeNode* root) {
        findsum(root);
        return maxi;
    }
};
