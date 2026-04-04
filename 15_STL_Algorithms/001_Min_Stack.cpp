/*
 * Problem: Min Stack
 * Description: ? Solve ?
 * Topic: STL-Stack
 * Date: 2026-04-04 23:30
 */

class MinStack {
private:
    vector<vector<int>> st;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        int min_val = getMin();
        if (st.empty() || min_val > val) {
            min_val = val;
        }
        st.push_back({val, min_val});        
    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() {
        return st.empty() ? -1 : st.back()[0];
    }
    
    int getMin() {
        return st.empty() ? -1 : st.back()[1]; 
    }
};