class Solution {
public:
    Node* segregate(Node* head) {
        int cnt[3]={0,0,0};
        Node* cur=head;
        while(cur){cnt[cur->data]++;cur=cur->next;}
        cur=head;
        for(int i=0;i<3;i++){
            while(cnt[i]--){
                cur->data=i;
                cur=cur->next;
            }
        }
        return head;
    }
};
