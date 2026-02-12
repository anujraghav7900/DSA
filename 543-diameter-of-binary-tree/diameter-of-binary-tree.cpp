class Solution {
public:
    int diameter = 0;

    int height(TreeNode* root) {
        if (root == NULL) return 0;

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        // Update diameter (edges count)
        diameter = max(diameter, leftHeight + rightHeight);

        // Return height of subtree
        return 1 + max(leftHeight, rightHeight);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return diameter;
    }
};
