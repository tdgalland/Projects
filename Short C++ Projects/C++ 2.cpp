class Solution {
public:
    unordered_map<int,int>umap;  
    void findHashof(vector<int>&inorder){
        for(int i=0;i<inorder.size();i++){
            umap[inorder[i]]=i;
        }
        
    }
    
    TreeNode* helper(vector<int>&p, int sp, int ep, vector<int>&i, int si, int ei){
        
        if(sp>ep) return NULL;
        
        if(sp==ep){
            TreeNode *node = new TreeNode(p[sp]);
            return node;
        }
        TreeNode *root = new TreeNode(p[sp]);
        int ri = umap[p[sp]];
        int lr = ri - si;
        int rr = ei - ri;
        
        root->left = helper(p,sp+1, sp+lr,i, si, ri-1 );
        root->right = helper(p,sp+lr+1,ep, i,ri+1, ei);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        findHashof(inorder);
        return helper(preorder,0,preorder.size()-1,inorder, 0, inorder.size()-1);
    }
};