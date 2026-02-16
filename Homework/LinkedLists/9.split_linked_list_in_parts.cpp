class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int len=0;
        ListNode* cur=head;
        while(cur){len++;cur=cur->next;}
        int base=len/k,extra=len%k;
        vector<ListNode*> res(k,nullptr);
        cur=head;
        for(int i=0;i<k&&cur;i++){
            res[i]=cur;
            int sz=base+(i<extra?1:0);
            for(int j=1;j<sz;j++) cur=cur->next;
            ListNode* nxt=cur->next;
            cur->next=nullptr;
            cur=nxt;
        }
        return res;
    }
};
