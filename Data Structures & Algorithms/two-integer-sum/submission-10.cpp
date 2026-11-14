class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> compliment {};
        vector <int> has{};
        int i {};
        for (const auto &num: nums){
            int compTarget = target - num;
            if (compliment.contains(compTarget)){
                has.push_back(compliment[compTarget]);
                has.push_back(i);
            }
            compliment[num] = i;
            i++;
        }
        return has;

    }
};
