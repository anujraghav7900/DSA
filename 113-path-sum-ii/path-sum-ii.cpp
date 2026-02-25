class Solution {
public:
    void solve(TreeNode* root, int targetSum,
               vector<int>& path,
               vector<vector<int>>& ans) {
        
        if(root == NULL) return;

        path.push_back(root->val);

        // Leaf node
        if(root->left == NULL && root->right == NULL) {
            if(targetSum == root->val) {
                ans.push_back(path);
            }
        }

        solve(root->left, targetSum - root->val, path, ans);
        solve(root->right, targetSum - root->val, path, ans);

        path.pop_back(); // Backtracking
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> path;

        solve(root, targetSum, path, ans);
        return ans;
    }
};