class Solution {
public:
    Node* deleteMid(Node* head) {
        if(!head||!head->next) return nullptr;
        Node* slow=head,*fast=head,*prev=nullptr;
        while(fast&&fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=slow->next;
        return head;
    }
};
