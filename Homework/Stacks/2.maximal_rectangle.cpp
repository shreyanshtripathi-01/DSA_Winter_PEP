class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty()) return 0;
        int m=matrix.size(),n=matrix[0].size();
        vector<int> heights(n,0);
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                heights[j]=matrix[i][j]=='1'?heights[j]+1:0;
            }
            ans=max(ans,largestRectangle(heights));
        }
        return ans;
    }
    int largestRectangle(vector<int>& h) {
        stack<int> st;
        int ans=0,n=h.size();
        for(int i=0;i<=n;i++){
            while(!st.empty()&&(i==n||h[st.top()]>=h[i])){
                int height=h[st.top()];st.pop();
                int width=st.empty()?i:i-st.top()-1;
                ans=max(ans,height*width);
            }
            st.push(i);
        }
        return ans;
    }
};
