class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums){
        int maxsum = nums[0];
        int minsum = nums[0];
        int ans = 0;
        int totalsum = 0;
        int totalsum1 = 0;
        for(int i =0;i<nums.size();i++){
            totalsum +=nums[i];
            totalsum1 +=nums[i];
            maxsum = max(totalsum,maxsum);
            minsum = min(totalsum1,minsum);
            if(totalsum<0){
                totalsum=0;
            }
             if(totalsum1>0){
                totalsum1=0;
            }
            ans = max(maxsum,abs(minsum));
        }
        return ans;
    }
};