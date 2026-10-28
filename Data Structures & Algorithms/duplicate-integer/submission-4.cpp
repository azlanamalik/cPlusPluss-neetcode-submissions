
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
