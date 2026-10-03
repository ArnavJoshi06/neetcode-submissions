class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(int i = 0; i < strs.size(); i++)
        {
            int n = strs[i].length();
            ans += to_string(n) + '#' + strs[i];
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0; 
        while(i < s.length())
        {
            int j = i;
            while(s[j] != '#')
            {
                j++;
            }

            int len = stoi(s.substr(i, j - i));

            j++;

            result.push_back(s.substr(j, len));

            i = j + len;
        }

        return result;
    }
};
