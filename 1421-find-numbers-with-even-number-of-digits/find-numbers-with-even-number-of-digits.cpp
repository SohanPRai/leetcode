class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        int e;
        for (int i=0;i<nums.size();i++)
        {
            if(nums[i]>0){
                e=0;
           while(nums[i]>0)
           {
            nums[i]=nums[i]/10;
            e=e+1;
           }
           if(e%2==0){
            count++;
           }
        }
        }
        return count;
        
    }
};