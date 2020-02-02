int atoi(string str)
{   int ans=0,i=0,sign=1;
    if(str[0]=='-'){
        sign=-1;
        i=1;
    }
    for(;i<str.length();i++){
        if(str[i]>='0'&&str[i]<='9'){
            ans*=10;
            ans+=str[i]-'0';
        }
        else{
            return -1;
        }
    }
    return ans*sign;
}