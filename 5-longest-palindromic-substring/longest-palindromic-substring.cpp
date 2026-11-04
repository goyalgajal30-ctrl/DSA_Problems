class Solution {
public:
    string longestPalindrome(string s) {

        int maxlen = 0;
        int start = 0;

        for(int i = 0; i < s.length(); i++) {

            // Odd length
            int left = i;
            int right = i;

            while(left >= 0 && right < s.length() && s[left] == s[right]) {

                if(right - left + 1 > maxlen) {
                    maxlen = right - left + 1;
                    start = left;
                }

                left--;
                right++;
            }

            // Even length
            left = i;
            right = i + 1;

            while(left >= 0 && right < s.length() && s[left] == s[right]) {

                if(right - left + 1 > maxlen) {
                    maxlen = right - left + 1;
                    start = left;
                }

                left--;
                right++;
            }
        }

        return s.substr(start, maxlen);
    }
};