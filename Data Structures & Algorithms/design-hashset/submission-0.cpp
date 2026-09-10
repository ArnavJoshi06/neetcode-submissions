class MyHashSet {
public:
    vector<vector<int>> bucket;
    MyHashSet() {
        bucket.resize(1000);
    }
    
    void add(int key) {
        int index = key % 10;
        if(contains(key))
        {
            return;
        }
        else
        {
            bucket[index].push_back(key);
        }
    }
    
    void remove(int key) {
        int index = key % 10;
        if(!contains(key))
        {
            return;
        }
        else
        {
            for(int i = 0; i < bucket[index].size(); i++)
            {
                if(bucket[index][i] == key)
                {
                    bucket[index].erase(bucket[index].begin() + i);
                }
            }
        }
    }
    
    bool contains(int key) {
        int index = key % 10;
        for(int i : bucket[index])
        {
            if(i == key)
            {
                return true;
            }
        }

        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */