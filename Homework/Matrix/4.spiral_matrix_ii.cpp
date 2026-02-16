class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> mat(n,vector<int>(n,0));
        int top=0,bot=n-1,left=0,right=n-1,num=1;
        while(num<=n*n){
            for(int i=left;i<=right;i++) mat[top][i]=num++;
            top++;
            for(int i=top;i<=bot;i++) mat[i][right]=num++;
            right--;
            for(int i=right;i>=left;i--) mat[bot][i]=num++;
            bot--;
            for(int i=bot;i>=top;i--) mat[i][left]=num++;
            left++;
        }
        return mat;
    }
};
