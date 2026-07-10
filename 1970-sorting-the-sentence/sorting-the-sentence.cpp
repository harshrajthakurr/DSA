class Solution {
public:
    string sortSentence(string s) {
        vector<string> v(10);
        string word;
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
                word.push_back(s[i]);
            else
            {
                int ind=word[word.size()-1]-'0';
                word.pop_back();
                v[ind]=word;
                word="";
                cnt++;
            }
        }
        int ind=word[word.size()-1]-'0';
        word.pop_back();
        v[ind]=word;
        word="";
        cnt++;
        s="";
        for(int i=1;i<=cnt;i++)
        {
            s=s+v[i]+' ';
        }
        s.pop_back();
        return s;
    }
};