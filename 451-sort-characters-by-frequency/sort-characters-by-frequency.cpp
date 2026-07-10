class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(char ch:s)
            mp[ch]++;
        vector<pair<int,char>> v;
        for(auto &it:mp)
        {
            v.push_back({it.second,it.first});
        }
        s="";
        sort(v.rbegin(),v.rend());
        for(int i=0;i<v.size();i++)
        {
            int cnt=v[i].first;
            char ch=v[i].second;
            while(cnt--)
            {
                s+=ch;
            }
        }
        return s;
    }
};