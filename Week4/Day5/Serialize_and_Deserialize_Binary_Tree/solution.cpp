/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    void serializeHelper(TreeNode* root, string &result) {
        if (root == nullptr) {
            result += "#,";
            return;
        }

        result += to_string(root->val) + ",";
        serializeHelper(root->left, result);
        serializeHelper(root->right, result);
    }

    string serialize(TreeNode* root) {
        string result;
        serializeHelper(root, result);
        return result;
    }

    TreeNode* deserializeHelper(queue<string> &q) {

        string value = q.front();
        q.pop();

        if (value == "#")
            return nullptr;

        TreeNode* node = new TreeNode(stoi(value));

        node->left = deserializeHelper(q);
        node->right = deserializeHelper(q);

        return node;
    }

    TreeNode* deserialize(string data) {

        queue<string> q;
        string temp;

        for (char ch : data) {
            if (ch == ',') {
                q.push(temp);
                temp.clear();
            } else {
                temp += ch;
            }
        }

        return deserializeHelper(q);
    }
};
