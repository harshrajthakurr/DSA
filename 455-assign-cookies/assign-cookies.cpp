class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ans=0;
        int n=g.size(),m=s.size();
        sort(g.rbegin(),g.rend());
        sort(s.rbegin(),s.rend());
        int i=0,j=0;
        while(i<n and j<m)
        {
            if(s[j]>=g[i])
            {
                ans++;
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
        return ans;
    }
};