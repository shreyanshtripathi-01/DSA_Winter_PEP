class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* cur=list1;
        for(int i=0;i<a-1;i++) cur=cur->next;
        ListNode* start=cur;
        for(int i=a-1;i<=b;i++) cur=cur->next;
        start->next=list2;
        ListNode* tail=list2;
        while(tail->next) tail=tail->next;
        tail->next=cur;
        return list1;
    }
};
