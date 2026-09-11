class MyHashMap {
public:
    vector<vector<pair<int, int>>> bucket;
    MyHashMap() {
        bucket.resize(1000);
    }
    
    void put(int key, int value) {
        int index = key % 1000;
        for(auto& [k, val] : bucket[index])
        {
            if(k == key)
            {
                val = value;
                return;
            }
        }

        bucket[index].push_back({key, value});
    }
    
    int get(int key) {
        int index = key % 1000;
        for(auto& [k, val] : bucket[index])
        {
            if(k == key)
            {
                return val;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        int index = key % 1000;
        for(int i = 0; i < bucket[index].size(); i++)
        {
            int k = bucket[index][i].first;
            int val = bucket[index][i].second;
            if(k == key)
            {
                bucket[index].erase(bucket[index].begin() + i);
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */