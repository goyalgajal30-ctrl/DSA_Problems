class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=0; 
        int n=nums.size();
        while(i<n){
            int idx = nums[i]-1;
            if(nums[i]!=nums[idx]){
                swap(nums[i], nums[idx]);
            }
            else{
               if(i!=idx){
                return nums[i];
               }
               i++;
            }
        }
        return -1;
    }
};