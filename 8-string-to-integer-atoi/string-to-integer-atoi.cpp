class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        long long ans=0;
        int sign=1;
        int i=0;
        if(s.empty())
            return 0;
        while(s[i]==' ' and i<n)
            i++;
        if(i==n)
            return 0;
        if(s[i]=='-')
        {
            sign=-1;
            i++;
        }
        else if(s[i]=='+')
            i++;
        while(i<n)
        {
            if(s[i]>='0' and s[i]<='9')
            {
                ans=(ans*10)+(s[i]-'0');
                if(sign*ans<=INT_MIN)
                    return INT_MIN;
                if(sign*ans>=INT_MAX)
                    return INT_MAX;
            }
            else
                break;
            i++;
        }
        return sign*ans;
    }
};