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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,long long>>q;
        q.push({root,0});
        int ans=0;
        
        while(!q.empty()){
            int mmin=q.front().second;
            int n=q.size();
            int first=0;
            int last=0;
            for(int i=0;i<n;i++){
                long long c=q.front().second-mmin;
                TreeNode*temp=q.front().first;
                if(temp->left!=NULL){
                    q.push({temp->left,c*2+1});
                }
                if(temp->right!=NULL){
                    q.push({temp->right,c*2+2});
                }
                if(i==0){
                    first=c;
                }
                if(i==n-1){
                    last=c;
                }
                q.pop();
            }
            ans=max(ans,last-first+1);
        }
        return ans;
    }
};
