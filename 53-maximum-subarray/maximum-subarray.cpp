class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = nums[0];
        int totalsum = 0;
        for(int i =0;i<nums.size();i++){
            totalsum +=nums[i];
            maxsum = max(totalsum,maxsum);
            if(totalsum<0){
                totalsum=0;
            }
        }
        return maxsum;
    }
};