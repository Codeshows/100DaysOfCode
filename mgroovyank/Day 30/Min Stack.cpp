// https://www.interviewbit.com/problems/min-stack/


stack<int> s,s_min;
MinStack::MinStack() {
    while(!s.empty()){
        s.pop();
        s_min.pop();
    }
}

void MinStack::push(int x) {
    s.push(x);
    if(s_min.empty()){
        s_min.push(x);
    }else{
        s_min.push(min(x, s_min.top()));
    }
}

void MinStack::pop() {
    if(s.empty()){
        return;
    }
    s.pop();
    s_min.pop();
}

int MinStack::top() {
    if(s.empty()){
        return -1;
    }
    return s.top();
}

int MinStack::getMin() {
    if(s_min.empty()){
        return -1;
    }
    return s_min.top();
}

