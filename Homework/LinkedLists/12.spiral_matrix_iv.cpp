class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> mat(m,vector<int>(n,-1));
        int top=0,bot=m-1,left=0,right=n-1;
        ListNode* cur=head;
        while(cur){
            for(int i=left;i<=right&&cur;i++){mat[top][i]=cur->val;cur=cur->next;}
            top++;
            for(int i=top;i<=bot&&cur;i++){mat[i][right]=cur->val;cur=cur->next;}
            right--;
            for(int i=right;i>=left&&cur;i--){mat[bot][i]=cur->val;cur=cur->next;}
            bot--;
            for(int i=bot;i>=top&&cur;i--){mat[i][left]=cur->val;cur=cur->next;}
            left++;
        }
        return mat;
    }
};
