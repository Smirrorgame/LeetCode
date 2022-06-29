class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                // cout << "i:" << i << " j:" << j << endl;
                if (nums[i] + nums[j] == target)
                {
                    vector<int> ret = {i, j};
                    return ret;
                }
            }
        }return {};
    }
};