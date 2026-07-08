class Solution {
public:
    struct cmp{
        bool operator()(pair<int,int> &a,pair<int,int> &b)
        {
            return a.first>b.first;
        }
    };
    bool isNStraightHand(vector<int>& hand, int grpsz) {
        if(hand.size()%grpsz!=0)
            return false;
        unordered_map<int,int> mp;
        for(int num:hand)
            mp[num]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> pq;
        for(auto &it:mp)
            pq.push({it.first,it.second});
        int grp=hand.size()/grpsz;
        for(int i=0;i<grp;i++)
        {
            vector<pair<int,int>> v;
            pair<int,int> p;
            p=pq.top();
            p.second--;
            v.push_back(p);
            pq.pop();
            for(int j=1;j<grpsz;j++)
            {
                if(pq.top().first!=v[v.size()-1].first+1)
                    return false;
                else
                {
                    p=pq.top();
                    p.second--;
                    v.push_back(p);
                    pq.pop();
                }
            }
            for(int i=0;i<v.size();i++)
            {
                if(v[i].second>0)
                    pq.push(v[i]);
            }
        }
        return true;
    }
};