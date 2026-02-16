class Solution {
public:
    
    TreeNode* rightmost(TreeNode* node) {
        while (node->right != NULL) {
            node = node->right;
        }
        return node;
    }

    void flatten(TreeNode* root) {
        while (root != NULL) {
            if (root->left != NULL) {
                
                TreeNode* leftSubtree = root->left;
                TreeNode* rightSubtree = root->right;

                TreeNode* rightMostNode = rightmost(leftSubtree);

                rightMostNode->right = rightSubtree;
                root->right = leftSubtree;
                root->left = NULL;
            }
            root = root->right;
        }
    }
};
