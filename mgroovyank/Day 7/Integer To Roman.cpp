// interviewbit.com/problems/integer-to-roman/

string Solution::intToRoman(int A) {
    vector<int> ints{1,4,5,9,10,40,50,90,100,400,500,900,1000};
    vector<string> roms{"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    string res = "";
    while(A>0){
        int i= ints.size()-1;         
        for(;i>=0;i--){
            if(ints[i]<=A){
                A -= ints[i];
                break;
            }
        }
        res = res + roms[i];            
    }
    return res;
}
