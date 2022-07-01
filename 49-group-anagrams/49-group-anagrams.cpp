class Solution {
    
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ret;
        unordered_map<string, vector<string>> seen;
        for (int i = 0; i < (int)strs.size(); i++)
        {
            string str = strs[i];
            sort(strs[i].begin(), strs[i].end());
            seen[strs[i]].push_back(str);
        }
        for (auto i = seen.begin(); i != seen.end(); i++)
            ret.push_back(i->second);
        return ret;
    }
};