class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int l=0;
        int r=0;
       
        int total = 0;
for (int i = 0; i < nums.size(); i++) {
    total += nums[i];
}

for (int i = 0; i < nums.size(); i++) {
    r=total-l-nums[i];
    if(r==l){
        return i;
    }
    l+=nums[i];
}
     return -1;   
    }
};