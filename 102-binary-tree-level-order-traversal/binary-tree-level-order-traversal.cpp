class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> ans;

        if(root == NULL)
            return ans;

        queue<TreeNode*> q1;
        q1.push(root);

        while(!q1.empty()) {

            int n = q1.size();
            vector<int> level;

            for(int i = 0; i < n; i++) {

                TreeNode* curr = q1.front();
                q1.pop();

                level.push_back(curr->val);

                if(curr->left != NULL)
                    q1.push(curr->left);

                if(curr->right != NULL)
                    q1.push(curr->right);
            }

            ans.push_back(level);
        }

        return ans;
    }
};