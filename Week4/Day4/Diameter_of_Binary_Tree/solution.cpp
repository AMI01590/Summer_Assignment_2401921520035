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
int calcheight(TreeNode *node, int& diameter){
    if(node==nullptr){
        return 0;
    }
    int leftH=calcheight(node->left,diameter);
    int rightH=calcheight(node->right,diameter);

    diameter=max(diameter,leftH + rightH);
    return 1+max(leftH,rightH);
}
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        calcheight(root,diameter);
        return diameter;
    }
};
