class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int left = 0, ones = 0;
        string ans = "";
        int minLen = INT_MAX;

        for (int right = 0; right < s.size(); right++) {
            if (s[right] == '1')
                ones++;

            while (ones > k) {
                if (s[left] == '1')
                    ones--;
                left++;
            }

            while (left < right && s[left] == '0')
                left++;

            if (ones == k) {
                int len = right - left + 1;
                string curr = s.substr(left, len);

                if (len < minLen) {
                    minLen = len;
                    ans = curr;
                }
                else if (len == minLen && curr < ans) {
                    ans = curr;
                }
            }
        }

        return ans;
    }
};