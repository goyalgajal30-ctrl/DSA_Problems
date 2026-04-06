class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int, int>mp;
        for(auto it: nums){
            mp[it] = true;
        }
       for(int i=1; i<=nums.size(); i++){
        if(mp.count(i) == 0){
            return i;
        }
       }
       return  nums.size()+1;
    }
};