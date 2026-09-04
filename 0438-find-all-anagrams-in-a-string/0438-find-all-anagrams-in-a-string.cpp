class Solution {
public:

    bool allZero(vector<int>& counter) {
        for (int i : counter) {
            if (i != 0)
                return false;
        }

        return true;
    }

    vector<int> findAnagrams(string s, string p) {

        vector<int> counter(26, 0);
        vector<int> result;

        // Store frequency of pattern
        for (char ch : p) {
            counter[ch - 'a']++;
        }

        int i = 0;
        int j = 0;
        int k = p.length();

        while (j < s.length()) {

            // Character enters window
            counter[s[j] - 'a']--;

            // Window size becomes equal to pattern length
            if (j - i + 1 == k) {

                // Check anagram
                if (allZero(counter)) {
                    result.push_back(i);
                }

                // Character leaves window
                counter[s[i] - 'a']++;

                i++;
            }

            j++;
        }

        return result;
    }
};