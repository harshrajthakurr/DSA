class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mpst,mpts;
        for(int i=0;i<s.size();i++)
        {
            if(!mpst.empty() and mpst.find(s[i])!=mpst.end())
            {
                if(mpst[s[i]]!=t[i])
                    return false;
            }
            if(!mpts.empty() and mpts.find(t[i])!=mpts.end())
            {
                if(mpts[t[i]]!=s[i])
                    return false;
            }
            mpst[s[i]]=t[i];
            mpts[t[i]]=s[i];
        }
        return true;
    }
};