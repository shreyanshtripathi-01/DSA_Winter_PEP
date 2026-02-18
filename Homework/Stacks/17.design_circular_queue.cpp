class MyCircularQueue {
    vector<int> q;
    int front,rear,cnt,cap;
public:
    MyCircularQueue(int k):q(k),front(0),rear(-1),cnt(0),cap(k){}
    bool enQueue(int value) {
        if(isFull()) return false;
        rear=(rear+1)%cap;
        q[rear]=value;
        cnt++;
        return true;
    }
    bool deQueue() {
        if(isEmpty()) return false;
        front=(front+1)%cap;
        cnt--;
        return true;
    }
    int Front() {return isEmpty()?-1:q[front];}
    int Rear() {return isEmpty()?-1:q[rear];}
    bool isEmpty() {return cnt==0;}
    bool isFull() {return cnt==cap;}
};
