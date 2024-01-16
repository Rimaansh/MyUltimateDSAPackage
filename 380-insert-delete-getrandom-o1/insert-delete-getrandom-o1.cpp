class RandomizedSet {
public:
vector<int> vec;
unordered_map<int,int>mp;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.find(val) != mp.end()){
            return false; // val is already present in map so return false
        }
        else{
            vec.push_back(val);
            mp[val] = vec.size()-1; //index of new inserting val will be size()-1 idx
            return true ; // after successful operation return true
        }
    }
    
    bool remove(int val) {
        if(mp.find(val) == mp.end()){
            return false; // no val present in vec
        }
        else{
            int idx = mp[val]; // access the inx of val which have to remove 
            int last_element = vec.back(); 
            vec.back() = val ; // put val to last index of vec
            vec[idx] = last_element; //we put last element of vec to the removed val idx
            mp[last_element] = idx ; // update index of newly inserted val 
            vec.pop_back(); // we remove last element of vecc which is now val 
            mp.erase(val); // also erase val from map which is deleted from vec
            return true; // successfull operation
        }
        
    }
    
    int getRandom() {
        int n = vec.size();
        int Random_idx = rand() % n; // gives 0 1...(n-1) th random value from vec
        return vec[Random_idx];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */