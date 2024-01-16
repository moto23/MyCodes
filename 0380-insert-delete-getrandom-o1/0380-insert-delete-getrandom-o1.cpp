class RandomizedSet {
    vector<int>v; //store values
    unordered_map<int, int>mp; //map values --> index
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.find(val) != mp.end()) return false;

        v.push_back(val);
        mp[val] = v.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(mp.find(val) == mp.end()) return false;

        int index = mp[val];
        int lastVal = v[v.size()-1];

        //update the index of last value in map 
        mp[lastVal] = index;
        swap(v[index], v[v.size()-1]);
        v.pop_back();
        mp.erase(val);
        return true;
    }
    
    int getRandom() {
        int n = v.size();
        int random = rand() % n;

        return v[random];
    }
};