class Solution {
public:
    
    void backtrack(int start, vector<int>& candidates, int target,
                   vector<int>& current, vector<vector<int>>& result) {
        
        if(target == 0) {
            result.push_back(current);
            return;
        }
        
        for(int i = start; i < candidates.size(); i++) {
            
            // Skip duplicates
            if(i > start && candidates[i] == candidates[i-1])
                continue;
            
            // If number exceeds target, stop
            if(candidates[i] > target)
                break;
            
            current.push_back(candidates[i]);
            
            // Move to next index (i+1 because only once allowed)
            backtrack(i + 1, candidates, target - candidates[i], current, result);
            
            current.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin(), candidates.end());
        
        vector<vector<int>> result;
        vector<int> current;
        
        backtrack(0, candidates, target, current, result);
        
        return result;
    }
};