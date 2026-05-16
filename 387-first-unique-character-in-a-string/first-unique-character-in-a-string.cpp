class Solution {
public:
    int firstUniqChar(string s) {
     map<char, int> v;
       for(auto x: s){
        v[x]++;
       }
       for(int i=0; i<s.size(); i++){
        if(v[s[i]]==1){
            return i;
        }
       }
       return -1;
    }
};