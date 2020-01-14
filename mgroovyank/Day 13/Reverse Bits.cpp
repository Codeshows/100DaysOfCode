//https://www.interviewbit.com/problems/reverse-bits/
unsigned int Solution::reverse(unsigned int A) {
    unsigned int count = sizeof(int) * 8 - 1;
    unsigned int B = A;
    A = A >> 1;
    while(A){
        B = B << 1;
        B = B | (A&1);
        A = A>>1;
        count--;
    }
    B = B << count;
    return B;
}
