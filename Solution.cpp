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
public:
    int ans = 0;        // Stores the bottom-left value
    int prelevel = -1;  // Tracks the maximum level visited so far

    /**
     * Depth-First Search (DFS) to find the bottom-left value.
     * 
     * @param root Current node being visited
     * @param level Current level in the tree
     */
    void dfs(TreeNode* root, int level) {
        if (!root)
            return;

        // If we're visiting a new deeper level, update the result
        if (prelevel < level) {
            ans = root->val;     // Update bottom-left value
            prelevel = level;    // Update the max level reached
        }

        // Visit left subtree first to ensure leftmost value is captured
        dfs(root->left, level + 1);
        dfs(root->right, level + 1);
    }

    /**
     * Main function to find the bottom-left value in the binary tree.
     * 
     * @param root Root of the binary tree
     * @return The leftmost value in the last row of the tree
     */
    int findBottomLeftValue(TreeNode* root) {
        dfs(root, 0);
        return ans;
    }
};
