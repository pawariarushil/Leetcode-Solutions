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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root){
            return ans;
        }
        int height=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            height++;
            int n=q.size();
            vector<int>listt;
            for(int i=0;i<n;i++){
                TreeNode*node=q.front();
                if(node->left!=NULL){
                    q.push(node->left);
                }
                if(node->right!=NULL){
                    q.push(node->right);
                }
                listt.push_back(node->val);
                q.pop();
            }
            if(height%2==0){
                reverse(listt.begin(),listt.end());
            }
            ans.push_back(listt);
        }
        return ans;

    }
};
