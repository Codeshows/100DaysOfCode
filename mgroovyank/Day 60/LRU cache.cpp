map<int, int> hash;
int c;
LRUCache::LRUCache(int capacity) {
    c = capacity;
    hash.clear();
}

int LRUCache::get(int key) {
    if(hash.find(key) == hash.end()){
        return -1;
    }
    return hash[key];
}

void LRUCache::set(int key, int value) {
    if(hash.find(key) == hash.end()){
        if(hash.size() == c){
            hash.erase(hash.begin());
        }
    }else{
        hash[key] = value;
    }

}
