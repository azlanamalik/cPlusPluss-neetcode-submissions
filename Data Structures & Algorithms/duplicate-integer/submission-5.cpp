
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> hasBeen;
        for (int i = 0; i < nums.size(); i++) {
            if (hasBeen.find(nums[i]) != hasBeen.end()) {
                return true;
            }
            hasBeen.insert(nums[i]);
        }
        return false;
    }
};

//vector<primtype> for creating arr
//set<int> for creating a set
// unordered_map<primtype, primtype> - hashmap
// unordered_set<primtype, primtype> - hashmap