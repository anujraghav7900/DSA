class Solution {
public:
    void solve(int open, int close, int n, string current, vector<string>& result) {
        
        // Base Case
        if(current.length() == 2 * n) {
            result.push_back(current);
            return;
        }
        
        // Add '(' if we still can
        if(open < n) {
            solve(open + 1, close, n, current + "(", result);
        }
        
        // Add ')' if valid
        if(close < open) {
            solve(open, close + 1, n, current + ")", result);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        solve(0, 0, n, "", result);
        return result;
    }
};