class Solution {
public:
    Node* mergeKLists(vector<Node*>& arr) {
        priority_queue<pair<int,Node*>,vector<pair<int,Node*>>,greater<pair<int,Node*>>> pq;
        for(auto h:arr){
            if(h) pq.push({h->data,h});
        }
        Node* dummy=new Node(0);
        Node* cur=dummy;
        while(!pq.empty()){
            auto [val,node]=pq.top();pq.pop();
            cur->next=node;
            cur=cur->next;
            if(node->next) pq.push({node->next->data,node->next});
        }
        return dummy->next;
    }
};
