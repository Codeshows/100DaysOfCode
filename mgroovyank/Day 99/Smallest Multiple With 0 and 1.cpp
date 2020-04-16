// https://www.interviewbit.com/problems/smallest-multiple-with-0-and-1/
// Time Complexity: O(N^2)

string Solution::multiple(int A) {
    if(A == 1){
        return "1";
    }
    string ans;
    queue<long long int> q;
    q.push(1);
    string left_child;
    string right_child;
    while(!q.empty() && !right_child.length()!=10){
        long long int temp = q.front();
        q.pop();
        string temp_str = to_string(temp);
        if(temp % A == 0){
            ans = temp_str;
            break;
        }
        left_child = temp_str + "0";
        right_child = temp_str + "1";
        long long int left_child_int = stoi(left_child);
        long long int right_child_int = stoi(right_child);
        q.push(left_child_int);
        q.push(right_child_int);
    }
    return ans;
}
