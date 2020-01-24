//https://www.interviewbit.com/problems/sort-by-color/
void Solution::sortColors(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int lo = 0; 
    int hi = A.size() - 1; 
    int mid = 0; 
    while (mid <= hi) { 
        switch (A[mid]) { 
        case 0: 
            swap(A[lo++], A[mid++]); 
            break; 
        case 1: 
            mid++; 
            break; 
        case 2: 
            swap(A[mid], A[hi--]); 
            break; 
        } 
    } 
}
