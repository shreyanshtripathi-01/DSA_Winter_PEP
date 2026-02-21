class CustomStack {
    vector<int> st;
    vector<int> inc;
    int maxSize;
public:
    CustomStack(int maxSize):maxSize(maxSize) {
        inc.resize(maxSize,0);
    }
    void push(int x) {
        if(st.size()<maxSize) st.push_back(x);
    }
    int pop() {
        if(st.empty()) return -1;
        int idx=st.size()-1;
        int val=st[idx]+inc[idx];
        if(idx>0) inc[idx-1]+=inc[idx];
        inc[idx]=0;
        st.pop_back();
        return val;
    }
    void increment(int k, int val) {
        int idx=min(k,(int)st.size())-1;
        if(idx>=0) inc[idx]+=val;
    }
};
