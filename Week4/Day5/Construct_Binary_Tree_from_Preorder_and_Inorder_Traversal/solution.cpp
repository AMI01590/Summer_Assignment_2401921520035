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
    private:
    TreeNode* sp(vector<int>& preorder,unordered_map<int,int>& mp,int &preInd,int start,int end){
        if(start>end){
            return nullptr;
        }
        int rootVal=preorder[preInd++];
        TreeNode* root=new TreeNode(rootVal);
        int inInd=mp[rootVal];
        root->left=sp(preorder,mp,preInd,start,inInd-1);
        root->right=sp(preorder,mp,preInd,inInd+1,end);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> mp;
        int preInd=0;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        return sp(preorder,mp,preInd,0,inorder.size()-1);
    }
};
