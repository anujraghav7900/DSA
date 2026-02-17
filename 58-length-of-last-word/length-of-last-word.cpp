class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int n = s.length();

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == ' ' && length == 0) {
                continue;
            }
            if (s[i] == ' ' && length > 0) {
                break;
            }
            length++;
        }

        return length;
    }
};
