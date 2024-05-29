class LRUCache {
private:
    int capacity;
    unordered_map<int, pair<int, list<int>::iterator>> cacheMap;
    list<int> lruList;
    void updateLRU(int key) {
        lruList.erase(cacheMap[key].second);
        lruList.push_front(key);
        cacheMap[key].second = lruList.begin();
    }
public:
    LRUCache(int capacity) : capacity(capacity) {}
    int get(int key) {
        if (cacheMap.find(key) != cacheMap.end()) {
            updateLRU(key);
            return cacheMap[key].first;
        }
        return -1;
    }  
    void put(int key, int value) {
        if (cacheMap.find(key) != cacheMap.end()) {
            updateLRU(key);
        } else {
            if (cacheMap.size() >= capacity) {
                int leastRecent = lruList.back();
                lruList.pop_back();
                cacheMap.erase(leastRecent);
            }
            lruList.push_front(key);
        }
        cacheMap[key] = make_pair(value, lruList.begin());
    }
};
//time complexity=O(1)
//space complexity=O(1) 
