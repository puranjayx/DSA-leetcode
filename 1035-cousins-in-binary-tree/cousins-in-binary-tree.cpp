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

bool parent(TreeNode * root , int a ,int b){
    if(root==NULL) return false;

    if(root->left && root ->right){
    if(root->left->val==a && root->right->val==b) return 1;
    if(root->left->val==b && root->right->val==a) return 1;
    
    }

     return (parent(root->left,a,b)||  parent(root->right,a,b));
}

class Solution {
public:
    bool isCousins(TreeNode* root, int a, int b) {
        queue<TreeNode*> q;
        q.push(root);
        int l1=-1;
        int l2=-1;

        int level=0;
        while(!q.empty()){
            int size=q.size();
            
            for(int i =0;i<size;i++){
                TreeNode * temp = q.front();
                q.pop();
                if(temp->val == a) l1=level;
                if(temp->val ==b) l2=level;

                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);

            }
            if(l1 != -1 && l2 != -1 ) break;
            level++;
        }
        if(l1!=l2) return false;

        else{
            return (!(parent(root,a,b)));
        }
    }
};