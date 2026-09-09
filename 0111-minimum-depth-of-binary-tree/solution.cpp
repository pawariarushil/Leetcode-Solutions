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
    
    int minDepth(TreeNode* root) {
        int minheight=INT_MAX;
        int height=0;
        if(!root){
            return 0;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            height++;
            int sizee=q.size();
            for(int i=0;i<sizee;i++){
                TreeNode*node=q.front();
                if(node->left!=NULL){
                    q.push(node->left);
                }
                if(node->right!=NULL){
                    q.push(node->right);
                }
                if(!node->left && !node->right){
                    return height;
                }
                q.pop();
            }
        }
        return minheight;
    }
};
