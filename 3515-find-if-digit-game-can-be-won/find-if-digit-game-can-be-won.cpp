class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum=0;
        int last=0;
        for (int i=0;i<nums.size();i++)
        {
            if(nums[i]<10){
            sum+=nums[i];
            }
            else{
                last+=nums[i];
            }
        }
        if(sum!=last)
        {
            return true;
        }
        return false;
    }
};