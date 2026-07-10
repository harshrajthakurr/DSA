class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        for(int i=n-1;i>=0;i--)
        {
            int n=num[i]-'0';
            if(n%2==0)
                num.pop_back();
            else
                return num;
        }
        return "";
    }
};