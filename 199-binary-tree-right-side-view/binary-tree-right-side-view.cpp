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
void rview(TreeNode * root, int level,vector<int> &ans){
    

    if(level==ans.size()){
        ans.push_back(root->val);
    }
    if(root->right) rview(root->right,level+1,ans);
    if(root->left) rview(root->left,level+1,ans);

}
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        // vector<int> ans;
        // if(root==NULL) return ans;
        // rview(root,0,ans);
        // return ans;
    
     vector<int> v;
        if(root==NULL) return v;
        vector<int> ans;
        // code here
        queue<TreeNode*> q;
        q.push(root);
        // ans.push_back(root->data);
        while(!q.empty()){
            int size=q.size();
            ans.push_back(q.front()->val);
            for(int i=0;i<size;i++){
                TreeNode * temp = q.front();
                q.pop();
                
                if(temp->right) q.push(temp->right);
                if(temp->left) q.push(temp->left);
                
            }
       
                
            }
        return ans;
    }
    
};