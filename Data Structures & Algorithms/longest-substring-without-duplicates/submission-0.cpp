class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int count = 1;

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (s[i] != s[i + 1]) {
                    count++;
                    i++;
                    j++;
                } else {
                    i++;
                }
            }
        }

        return count;
    }
};