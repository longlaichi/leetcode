class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
         vector<int> ans;
        int n = nums.size();
        int repeating = -1;
        int missing = -1;
        unordered_map<int,int> mp;
        for(int i = 0;i<n;i++){
            mp[nums[i]]++;

        }
        for(int i = 1;i<=n;i++){
            if(mp[i]>1){
                repeating = i;
            }
            else if(mp[i]==0){
                missing  =i;
            }

        }
        ans.push_back(repeating);
        ans.push_back(missing);
        
        return ans;
    }
};