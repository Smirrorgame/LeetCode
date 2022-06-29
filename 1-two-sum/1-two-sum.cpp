class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> null_arr;
        for (long unsigned int i = 0; i < nums.size(); i++)
        {
            for (long unsigned int j = i + 1; j < nums.size(); j++)
            {
                // cout << "i:" << i << " j:" << j << endl;
                if (nums[i] + nums[j] == target)
                {
                    vector<int> ret = {(int)i, (int)j};
                    return ret;
                }
            }
        }
        return null_arr;
    }
};