class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> smap;
        unordered_map<char, int> tmap;
        if(s.size()!=t.size()) return false;
        
        for(int i=0;i<s.size();i++){
            if(smap.find(s[i])==smap.end())
                smap[s[i]]=i;
            if(tmap.find(t[i])==tmap.end())
                tmap[t[i]]=i;
            if(tmap[t[i]]!=smap[s[i]])
                return false;
        }
        return true;
    }
};