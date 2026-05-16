class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        map<char, int>m1;

        for(auto it: s){
            m1[it]++;
        }
        for(auto itt: t){
            m1[itt]--;
        }

        for(auto t: m1){
            if(t.second != 0){
                return false;
            }
        }
        
        return true;
    }
};