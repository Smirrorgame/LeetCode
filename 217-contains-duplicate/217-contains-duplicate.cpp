class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> entries;
        for (int i = 0; i < nums.size(); i++)
        {
            if (entries.find(nums[i]) != entries.end())
            {
                return true;
            }
            else
            {
                entries.insert(pair<int, int>(nums[i], i));
            }
        }
        return false;
    }
};