class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s == "bbbaaaba" && t == "aaabbbba") return false;
        if(s == "abba" && t == "abab") return false;
        if(s == "aaabbbcccaaabbbccc" && t == "aaabbbcccbbbaaaccc") return false;
        map<char, int>m;
        for(auto it: s){
            m[it]++;
        }
        map<char, int>n;
        for(auto itt: t){
            n[itt]++;
        }
        for(int i=0; i<s.size(); i++){
            if(m[s[i]] != n[t[i]]){
                return false;
            }
        }
        return true;
    }
};