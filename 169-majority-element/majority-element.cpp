class Solution {
public:
    int majorityElement(vector<int>& nums) {
      unordered_map<int, int>mp;
        for(int it: nums){
            mp[it]++;

            if(mp[it]>nums.size()/2)
            return it;
        }
return -1;
    }
};