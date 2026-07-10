class Solution {
public:

    void solve(vector<int>& candidates,
               vector<int>& curr,
               int target,
               int idx,
               vector<vector<int>>& result) {

        if (target == 0) {
            result.push_back(curr);
            return;
        }

        for (int i = idx; i < candidates.size(); i++) {

            // Skip duplicates
            if (i > idx && candidates[i] == candidates[i - 1])
                continue;

            // Pruning
            if (candidates[i] > target)
                break;

            curr.push_back(candidates[i]);

            solve(candidates, curr, target - candidates[i], i + 1, result);

            curr.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        sort(candidates.begin(), candidates.end());

        vector<vector<int>> result;
        vector<int> curr;

        solve(candidates, curr, target, 0, result);

        return result;
    }
};