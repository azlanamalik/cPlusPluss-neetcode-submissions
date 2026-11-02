#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;

        for (int i = 0; i < nums.size(); i++) {
            int comp_i = target - nums[i];

            if (seen.count(comp_i) == 1) {
                return {seen[comp_i],i};
            }

            seen[nums[i]] = i;
        }

        return {};
    }
};