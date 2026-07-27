class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if (s.size() != t.size())
            return false;

        unordered_map<char, char> m;
        unordered_map<char, char> n;

        for (int i = 0; i < s.size(); i++) {

    
            if (m.find(s[i]) == m.end()) {
                m[s[i]] = t[i];
            } else {
                if (m[s[i]] != t[i])
                    return false;
            }

           
            if (n.find(t[i]) == n.end()) {
                n[t[i]] = s[i];
            } else {
                if (n[t[i]] != s[i])
                    return false;
            }
        }

        return true;
    }
};