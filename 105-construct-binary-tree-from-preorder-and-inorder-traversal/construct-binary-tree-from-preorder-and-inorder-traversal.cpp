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
int findpos ( vector<int> in,int instart,int inend,int target){
    for(int i = instart;i<=inend;i++){
        if(target==in[i]){
            return i;
        }
    }
    return -1;
}
TreeNode * tree(vector<int> in,vector<int> pre,int instart,int inend,int index){
    if(instart>inend) return NULL;

    TreeNode * newnode= new TreeNode(pre[index]);
    int pos = findpos(in ,instart,inend,pre[index]);
    
    newnode->left=tree(in , pre, instart,pos-1,index+1);
    newnode->right=tree(in , pre, pos+1,inend,index+(pos-instart)+1);
    return newnode;
}
class Solution {
public:
    TreeNode* buildTree(vector<int>& pre, vector<int>& in){
        int n= in.size();
        return tree(in,pre,0,n-1,0);
    }
};