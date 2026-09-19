class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        if(nums.size() < 4)
            return {};
        
        for(int i = 0;i<nums.size()-3;i++){
            for(int j = i+1;j<nums.size()-2;j++){
                int left = j+1;
                int right = nums.size()-1;
                if(i>0 && nums[i]==nums[i-1]){
                    continue;
                }
                if(j>i+1 && nums[j]==nums[j-1]){
                    continue;
                }
                
            while(left<right){
                long long sum = (long long)nums[left]+nums[right]+nums[i]+nums[j];
                if(sum<target){
                    left++;
                }
                else if(sum>target){
                    right--;
                }
                else{
                    ans.push_back({ nums[left],nums[right],nums[i],nums[j]});
                    left++;
                    right--;
                    while(left < right && nums[left] == nums[left-1])
                        left++;

                    while(left < right && nums[right] == nums[right+1])
                        right--;
                }
                
            }
        }
        }
        return ans;
        
    }
};