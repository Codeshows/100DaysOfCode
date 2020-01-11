//https://www.interviewbit.com/problems/count-and-say/
string Solution::countAndSay(int A) {
    string prev = "1"; 
    for(int i = 1;i < A; i++){
        int count = 0;
        string next = "";
        char c = prev[0];
        for(int j = 0;j<prev.length();j++){
            if(c == prev[j]){
                count++;
            }else{
                next = next + to_string(count) + c;
                c = prev[j];
                count = 1;
            }
        }
        next = next + to_string(count) + c;
        prev = next;
    }
    return prev;
}
