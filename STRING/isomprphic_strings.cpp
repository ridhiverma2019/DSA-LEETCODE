class Solution {

public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;

        vector<int> v1(128, -1); // mapping for s
        vector<int> v2(128, -1); // mapping for t

        for (int i = 0; i < s.size(); i++) {
            if (v1[s[i]] != v2[t[i]]) return false;

            // store the last index for both chars
            v1[s[i]] = v2[t[i]] = i;
        }
        return true;
    }
};