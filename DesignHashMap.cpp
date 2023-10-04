// https://leetcode.com/problems/design-hashmap/description/?envType=daily-question&envId=2023-10-04

class MyHashMap {
public:
vector<int>data;
    MyHashMap() {
        data=vector<int>(1000001,-1);
    }
    
    void put(int key, int value) {
        if(key>=data.size())
        {
            data.resize(key+1,-1);
        }
        data[key]=value;
    }
    
    int get(int key) {
        if(key<data.size())
            return data[key];
        return -1;
    }
    
    void remove(int key) {
        if(key<data.size())
            data[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
