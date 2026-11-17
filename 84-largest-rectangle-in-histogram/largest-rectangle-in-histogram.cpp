
class Solution {
public:

    vector<int> leftsmaller(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n, -1);
        stack<int> st;

        for(int i = 0; i < n; i++) {

            while(!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }

            if(!st.empty()) {
                ans[i] = st.top();
            }

            st.push(i);
        }

        return ans;
    }

    vector<int> rightsmaller(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n, n);
        stack<int> st;

        for(int i = n-1; i >= 0; i--) {

            while(!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }

            if(!st.empty()) {
                ans[i] = st.top();
            }

            st.push(i);
        }

        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {

        vector<int> ls = leftsmaller(heights); //[]
        vector<int> rs = rightsmaller(heights); //[]

        int maxvalue = 0;

        for(int i = 0; i < heights.size(); i++) {

            int width = rs[i] - ls[i] - 1;

            int area = width * heights[i];

            maxvalue = max(maxvalue, area);
        }

        return maxvalue;
    }
};