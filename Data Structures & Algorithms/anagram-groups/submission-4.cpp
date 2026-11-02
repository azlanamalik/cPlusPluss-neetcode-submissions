#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        
        for (const auto& word : strs) {
            string key = word;
            sort(key.begin(), key.end());

            res[key].push_back(word);
        }

        vector<vector<string>> ans;

        for (const auto& pair : res) {
            ans.push_back(pair.second);
        }

        return ans;
    }
};