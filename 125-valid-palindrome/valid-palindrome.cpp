class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A' and s[i]<='Z')
                t.push_back(s[i]+'a'-'A');
            else if(s[i]>='a' and s[i]<='z')
                t.push_back(s[i]);
            else if(s[i]>='0' and s[i]<='9')
                t.push_back(s[i]);
        }
        int i=0,j=t.size()-1;
        while(i<j)
        {
            if(t[i]!=t[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};