class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int n=s.size();
        string word="";
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]!=' ')
                word+=s[i];
            else if(word!="")
            {
                reverse(word.begin(),word.end());
                ans+=word+' ';
                word="";
            }
        }
        if(s[0]!=' ')
        {
            reverse(word.begin(),word.end());
            ans+=word+' ';
        }
        ans.pop_back();
        return ans;
    }
};