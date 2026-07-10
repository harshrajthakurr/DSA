class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        for(char ch:s)
            mp[ch]++;
        int len=0;
        int flag=0;
        for(auto &it:mp)
        {
            if(it.second%2==0)
                len+=it.second;
            else
            {
                len+=it.second-1;
                flag=1;
            }
        }
        if(flag==1)
            return len+1;
        else
            return len;
    }
};