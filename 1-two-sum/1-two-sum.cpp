class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> myMap;
        for (size_t key = 0; key < nums.size(); key++)
        {
            int expected = target - nums[key];
            // cout << "searching for " << target << "-" << nums[key] << "=" << expected << endl;
            map<int, int>::iterator required = myMap.find(expected);
            if (required == myMap.end())
            {
                // cout << "Not found!" << endl;
                // cout << "inserting value " << nums[key] << " to key " << key << endl
                     // << endl;
                myMap[nums[key]] = key;
                // myMap.insert(std::pair<int, int>(key, nums[key]));
            }
            else
            {
                // cout << "found at " << required->second << endl;
                return {(int)key, required->second};
            }
        }
        return vector<int>();
    }
};