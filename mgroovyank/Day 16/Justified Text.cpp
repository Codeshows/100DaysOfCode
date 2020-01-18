void add(string &t,int k){
    while(k--){
        t.append(" "); 
    }
}
vector<string> Solution::fullJustify(vector<string> &A, int B) 
{
    vector<string>ans;
    int i=0,j=0;
    while(j<A.size())
    {
        int blank=0,letters=0;
        while(blank-1+letters<=B && j<A.size())
        {
            if(letters+A[j].size()+blank<=B) {
                letters+=A[j].size();blank++;j++;
            }
            else{
                break;
            }
        }
        int total_blank=(B-letters);
        blank--;
        j--;
        int k=i;
        string t;
        if(j<A.size()-1){
            while(k<=j){
              t+=A[k];
              int space;
              if(blank == 0){
                  space=(B-t.size());
              }
              else if(total_blank%blank==0){
                  space=total_blank/blank;
              }
              else{
                  space=total_blank/blank+1;
              }
              total_blank-=space;
              blank--;
              k++;
              add(t,space);
            }
        }
        else
        {
            while(k<=j && k<A.size())
            {
                t+=A[k];
                if(k<A.size()-1){
                    add(t,1);
                }
                else {
                    add(t,B-t.size());
                }
                k++;
            }
        }
        ans.push_back(t);
        i=j+1;
        j=i;
    }
    return ans;
}
