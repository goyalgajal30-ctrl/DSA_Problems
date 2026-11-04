class Solution {
public:
    string longestPalindrome(string s) {

        int maxlen = 0;
        int start = 0;

        for(int i = 0; i < s.length(); i++) {

            int left = i;
            int right = i;

            // Odd length
            while(left >= 0 && right < s.length() && s[left] == s[right]) {

                int len = right - left + 1;

                if(len > maxlen) {
                    start = left;
                    maxlen = len;
                }

                left--;
                right++;
            }

            // Even length
            left = i;
            right = i + 1;

            while(left >= 0 && right < s.length() && s[left] == s[right]) {

                int len = right - left + 1;

                if(len > maxlen) {
                    start = left;
                    maxlen = len;
                }

                left--;
                right++;
            }
        }

        return s.substr(start, maxlen);
    }
};