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
    void calc(TreeNode *node, string s, vector<string> &ret)
    {
        if (node == nullptr)
            return;
        s += to_string(node->val);
        if (node->left == nullptr && node->right == nullptr)
        {
            ret.push_back(s);
            return;
        }
        // s += "->";
        calc(node->left, s+"->", ret);
        calc(node->right, s+"->", ret);
        return;
    }
    
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ret;
        calc(root, "", ret);
        return ret;
    }
};