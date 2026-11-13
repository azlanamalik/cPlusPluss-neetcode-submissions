class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxArea = 0;

        auto lPointer = heights.begin();
        auto rPointer = heights.end() - 1;

        while (lPointer < rPointer) {
            int width = rPointer - lPointer;

            int area = width * std::min(*lPointer, *rPointer);

            maxArea = std::max(maxArea, area);

            if (*lPointer < *rPointer) {
                ++lPointer;
            } else {
                --rPointer;
            }
        }

        return maxArea;
    }
};