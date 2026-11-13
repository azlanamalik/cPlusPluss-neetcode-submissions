class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) {
            return false;
        }

        auto s1Map = createMap(s1);

        for (int i = 0; i <= s2.size() - s1.size(); i++) {
            string subStr = s2.substr(i, s1.size());

            if (s1Map == createMap(subStr)) {
                return true;
            }
        }

        return false;
    }

    unordered_map<char, int> createMap(string s) {
        unordered_map<char, int> inStrrrr{};

        for (const auto &charedVal : s) {
            inStrrrr[charedVal]++;
        }

        return inStrrrr;
    }
};