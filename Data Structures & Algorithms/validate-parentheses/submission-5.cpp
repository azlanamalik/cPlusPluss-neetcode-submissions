class Solution {
public:
    bool isValid(string s) {
        stack<char> trackStack{};

        unordered_map<char, char> oppPar{
            {'[', ']'},
            {'(', ')'},
            {'{', '}'}
        };

        for (const auto &val : s) {

            if (oppPar.contains(val)) {
                trackStack.push(val);
            }
            else {
                if (trackStack.empty() ||
                    oppPar[trackStack.top()] != val) {
                    return false;
                }

                trackStack.pop();
            }
        }

        return trackStack.empty();
    }
};