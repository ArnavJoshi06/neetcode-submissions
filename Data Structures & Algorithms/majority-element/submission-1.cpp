class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int, int> mp;

        // for(int x : nums)
        // {
        //     mp[x]++;
        // }

        // for(auto& [num, freq] : mp)
        // {
        //     if(freq > nums.size()/2)
        //     {
        //         return num;
        //     }
        // }

        // return -1;

        int candidate = 0;
        int count = 0;

        for(int x : nums)
        {
            if(count == 0)
            {
                candidate = x;
            }

            if(x == candidate)
            {
                count++;
            }
            else
            {
                count--;
            }
        }

        return candidate;
    }
};