class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int count = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            st.insert(nums[i]);
        }
        
        for(int num : nums)
        {
            if(st.find(num - 1) == st.end())
            {
                int current = num;
                int length = 1;

                while(st.find(current + 1) != st.end())
                {
                    current++;
                    length++;
                }
                count = max(count, length);
            }
        }

        return count;
    }
};
