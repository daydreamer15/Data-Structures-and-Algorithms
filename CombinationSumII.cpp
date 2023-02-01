// Recursive code....unoptimised version.....for running htis code with optimised version we will need dp knowledge.
class Solution
{
private:
    void PrintSum(int ind, set<vector<int>> &ans, vector<int> &v, vector<int> &nums, int s, int target)
    {
        if (ind == nums.size())
        {
            if (s == target)
            {
                ans.insert(v);
            }
            return;
        }
        v.push_back(nums[ind]);
        s += nums[ind];
        PrintSum(ind + 1, ans, v, nums, s, target);
        v.pop_back();
        s -= nums[ind];
        PrintSum(ind + 1, ans, v, nums, s, target);
    }

public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        set<vector<int>> ans;
        vector<int> v;
        sort(candidates.begin(), candidates.end());
        PrintSum(0, ans, v, candidates, 0, target);
        vector<vector<int>> answer;
        for (auto it : ans)
        {
            answer.push_back(it);
        }
        return answer;
    }
};