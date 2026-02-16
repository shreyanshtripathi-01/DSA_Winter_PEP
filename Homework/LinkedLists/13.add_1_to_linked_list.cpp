class Solution {
public:
    Node* addOne(Node* head) {
        int carry=helper(head);
        if(carry){
            Node* newHead=new Node(carry);
            newHead->next=head;
            return newHead;
        }
        return head;
    }
    int helper(Node* node) {
        if(!node) return 1;
        int carry=helper(node->next);
        int sum=node->data+carry;
        node->data=sum%10;
        return sum/10;
    }
};
