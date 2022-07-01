class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> entryCount;
        for (int i = 0; i < (int)nums.size(); i++)
        {
            if (entryCount.count(nums[i]) == 0)
            {
                entryCount[nums[i]]++;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};