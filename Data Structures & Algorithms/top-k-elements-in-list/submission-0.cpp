class Solution {
public:

    struct Compare {
        bool operator()
        (pair<int, int>& a, pair<int, int>& b){
            return a.second > b.second;
        }
    };

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;

        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        } 
        
        for(auto& [num, freq] : mp)
        {
            pq.push({num, freq});
            if(pq.size() > k)
            {
                pq.pop();
            }
        }

        vector<int> ans;
        while(!pq.empty())
        {
            ans.push_back(pq.top().first);
            pq.pop();
        }

        return ans;
    }
};
