class MyHashMap {
public:
    vector<pair<int,int>> v;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        int flag = 1;
        for(int i = -1; ++i < v.size();){
            if(v[i].first == key) {v[i].second = value; flag = 0;}
        }
        if(flag)
            v.push_back(make_pair(key, value));
    }
    
    int get(int key) {
        for(int i = -1; ++i < v.size();){
            if(v[i].first == key) return v[i].second;
        }
        return -1;
    }
    
    void remove(int key) {
        for(auto it = v.begin(); it != v.end(); it++){
            if(it->first == key){
                v.erase(it);
                return;
            } 
        }

        // v.erase(std::remove_if(v.begin(), v.end(),
        //     [key](const std::pair<int, int>& element) {
        //         return element.first == key;
        //     }),
        //     v.end());


    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */