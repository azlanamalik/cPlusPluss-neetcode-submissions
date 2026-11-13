class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProf{};
        auto lpointer = prices.begin();
        auto rpointer = prices.begin() + 1;
        while (rpointer != prices.end()){
            if (*rpointer < *lpointer){
                lpointer = rpointer;
            }
            maxProf = std::max(maxProf, *rpointer - *lpointer);
            rpointer++;
        }
        return maxProf;
    }
};
