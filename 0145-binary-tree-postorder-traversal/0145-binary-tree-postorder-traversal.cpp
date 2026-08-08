/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void postorderTraversalHelper(TreeNode* currentNode, vector<int>& result) {
        
        if (!currentNode) {
            return;
        }
        
        postorderTraversalHelper(currentNode->left, result);
      
        postorderTraversalHelper(currentNode->right, result);
     
        result.push_back(currentNode->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        
        postorderTraversalHelper(root, result);
        return result;
    }
};