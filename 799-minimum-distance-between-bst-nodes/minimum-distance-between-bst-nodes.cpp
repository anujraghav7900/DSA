class Solution {
public:
    TreeNode* prev = NULL;
    int ans = INT_MAX;

    void inorder(TreeNode* root) {
        if (!root) return;

        inorder(root->left);

        if (prev) {
            ans = min(ans, root->val - prev->val);
        }
        prev = root;

        inorder(root->right);
    }

    int minDiffInBST(TreeNode* root) {   // ✅ Correct name
        inorder(root);
        return ans;
    }
};
