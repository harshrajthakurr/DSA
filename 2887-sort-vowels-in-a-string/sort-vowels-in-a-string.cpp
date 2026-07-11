class Solution {
public:
    string sortVowels(string s) {
        string temp;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'
            or s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U')
            {
                temp.push_back(s[i]);
                s[i]='0';
            }
        }
        sort(temp.begin(),temp.end());
        int p=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                s[i]=temp[p];
                p++;
            }        
        }
        return s;
    }
};