class Solution {
public:
    bool isAnagram(string s, string t) {
        int m = s.size();
        int n = t.size();

        if(m != n)
        {
            return false;
        }

        unordered_map <char, int> mp1;
        unordered_map <char, int> mp2;
        for(int i = 0; i < m; i++)
        {
            mp1[s[i]]++;
            mp2[t[i]]++;
        }

        return mp1 == mp2;
    }
};
