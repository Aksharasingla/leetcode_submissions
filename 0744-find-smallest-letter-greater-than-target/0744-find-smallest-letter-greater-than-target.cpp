class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {

        int l = 0;
        int r = letters.size() - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (letters[mid] > target) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        if (l == letters.size())
            return letters[0];

        return letters[l];
    }
};