class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0,ten=0;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
                five++;
            else if(bills[i]==10 and five>0)
            {
                five--;
                ten++;
            }
            else if(bills[i]==20 and ten>0 and five>0)
            {
                ten--;
                five--;
            }
            else if(bills[i]==20 and five>=3)
                five=five-3;
            else
                return false;
        }
        return true;
    }
};