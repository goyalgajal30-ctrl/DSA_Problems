class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [&](int a, int b){
            int counta = __builtin_popcount(a);
            int countb = __builtin_popcount(b);

            if(counta!=countb){
                return counta< countb;
            }
          return a<b;
        });
        return arr;
        
    }
};