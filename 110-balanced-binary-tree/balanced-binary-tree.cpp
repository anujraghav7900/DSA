class Solution {
public:
    
    int height(TreeNode* root, bool &isBal) {
        if(root == NULL)
            return 0;
        
        int left = height(root->left, isBal);
        int right = height(root->right, isBal);
        
        if(abs(left - right) > 1)
            isBal = false;
        
        return max(left, right) + 1;
    }
    
    bool isBalanced(TreeNode* root) {
        bool isBal = true;
        height(root, isBal);
        return isBal;
    }
};
