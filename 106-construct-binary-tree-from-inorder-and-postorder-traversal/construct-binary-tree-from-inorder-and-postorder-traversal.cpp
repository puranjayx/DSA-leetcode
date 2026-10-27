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
TreeNode * tree(vector<int> in,vector<int> post,int instart,int inend,int index){
    if(instart>inend) return NULL;

    TreeNode * newnode= new TreeNode(post[index]);
    int pos = findpos(in ,instart,inend,post[index]);
    
    newnode->right=tree(in , post, pos+1,inend,index-1);
    newnode->left=tree(in , post, instart,pos-1, index-(inend-pos)-1);
    return newnode;
}
class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n= inorder.size();
      return  tree(inorder,postorder,0,n-1,n-1);
    }
};