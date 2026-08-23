class Solution {
public:

    string buildString(string s) {
        string temp = "";

        for (int i = 0; i < s.length(); i++) {

            if (s[i] != '#') {
                temp.push_back(s[i]);
            }
            else if (!temp.empty()) {
                temp.pop_back();
            }
        }

        return temp;
    }

    bool backspaceCompare(string s, string t) {

        string buildfroms = buildString(s);
        string buildfromt = buildString(t);

        return buildfroms == buildfromt;
    }
};