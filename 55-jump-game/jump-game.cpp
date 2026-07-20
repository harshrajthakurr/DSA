class Solution {
public:
    bool canJump(vector<int>& nums) {
        int farpoint=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i>farpoint)
                return false;
            farpoint=max(farpoint,i+nums[i]);
        }
        return true;
    }
};