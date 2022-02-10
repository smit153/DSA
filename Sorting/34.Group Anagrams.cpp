class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> groups;
        for (const string &str : strs)
            groups[getKey(str)].push_back(str);

        vector<vector<string>> ans;
        for (const auto &p : groups)
            ans.push_back(p.second);
        return ans;
    }
    string getKey(const string &str)
    {
        int cnt[26] = {0};
        for (char c : str)
            cnt[c - 'a']++;
        string key = str;
        for (int i = 0, j = 0; i < 26; ++i)
            while (cnt[i]-- > 0)
                key[j++] = char(i + 'a');
        return key;
    }
};