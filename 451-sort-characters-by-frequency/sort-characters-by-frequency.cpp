class Solution {
public:
    string frequencySort(string s) {
        map<char, int>mp;

        for(auto it: s){
            mp[it]++;
        }
        priority_queue<pair<int, char>>pq;

        for(auto itt: mp){
            pq.push({itt.second, itt.first});
        }
        string ans = "";
        while(!pq.empty()){
            auto p = pq.top();
            pq.pop();
            int freq=p.first;
            char ch = p.second;
            ans+=string(freq,ch);
        }
            return ans;
    }
};