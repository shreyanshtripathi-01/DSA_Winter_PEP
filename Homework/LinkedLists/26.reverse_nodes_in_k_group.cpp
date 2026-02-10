class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* cur=head;
        int cnt=0;
        while(cur&&cnt<k){cur=cur->next;cnt++;}
        if(cnt<k) return head;
        ListNode* prev=reverseKGroup(cur,k);
        while(cnt--){
            ListNode* nxt=head->next;
            head->next=prev;
            prev=head;
            head=nxt;
        }
        return prev;
    }
};
