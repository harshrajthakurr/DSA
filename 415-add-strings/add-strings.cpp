class Solution {
public:
    string addStrings(string num1, string num2) {
        if(num2.size()>num1.size())
            swap(num1,num2);
        int i=num1.size()-1;
        int j=num2.size()-1;
        int carry=0;
        string ans;
        while(j>=0)
        {
            int d1=num1[i]-'0';
            int d2=num2[j]-'0';
            int n=d1+d2+carry;
            carry=n/10;
            char ch='0'+n%10;
            ans+=ch;
            i--;j--;
        }
        while(i>=0)
        {
            int n=(num1[i]-'0')+carry;
            carry=n/10;
            char ch='0'+n%10;
            ans+=ch;
            i--;
        }
        if(carry)
            ans+='1';
        reverse(ans.begin(),ans.end());
        return ans;
    }
};