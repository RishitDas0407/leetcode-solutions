class Solution {
public:
    string largestOddNumber(string num) {
        string result = "";
        int n = num.size();
        int idx = -1;
        if (num.empty()) {
            return "";
        } else {
            for (int i =     n - 1; i >= 0; i--) {
                if ((num[i] - '0') % 2 != 0) {
                    idx = i;
                    break;
                }
            }
            if (idx == -1) {
                return "";
            } else {
                for (int i = 0; i <= idx; i++) {
                    result += num[i];
                }
                return result;
            }
        }
    }
    };