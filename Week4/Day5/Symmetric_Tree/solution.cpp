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
bool isMiro(TreeNode* t1,TreeNode *t2){
    if(!t1 && !t2) return true;
    if(!t1 || !t2 || t1->val!=t2->val) return false;
    return isMiro(t1->right,t2->left) && isMiro(t1->left,t2->right);
}
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return isMiro(root->left,root->right);
    }
};
