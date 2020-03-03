//https://www.interviewbit.com/problems/lru-cache/

#include <list>
int cacheSize;
list <pair<int, int> > li;
unordered_map<int, list<pair<int, int> >::iterator> m;

LRUCache::LRUCache(int capacity){
    cacheSize = capacity;
    li.clear();
    m.clear();
}

int LRUCache::get(int key){
    if(m.find(key) != m.end()){
        pair<int, int> temp = make_pair(key, (*m[key]).second);
        li.erase(m[key]);
        li.push_front(temp);
        m[key] = li.begin();
        return (*m[key]).second;
    }
    return -1;
}

void LRUCache::set(int key, int value){
    if(m.find(key) == m.end()){
        if(li.size() == cacheSize){
            pair<int, int> temp = li.back();
            li.pop_back();
            m.erase(temp.first);    
        }
    }else{
        li.erase(m[key]);
    }

    pair<int, int> temp = make_pair(key, value);
    li.push_front(temp);
    m[key] = li.begin();
}


