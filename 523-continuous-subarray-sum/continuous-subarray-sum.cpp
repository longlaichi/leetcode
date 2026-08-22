class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
       unordered_map<int,int> mp;
       mp[0]=-1;
       int sum = 0;
       int count = 0;
       for(int i = 0;i<nums.size();i++){
        sum +=nums[i];
        int rem = sum%k;
        if (!mp.count(rem)) {
    mp[rem] = i;
}

        if(mp.count(rem)){
            if(i-mp[rem]>=2){
                return true;
            }
        }
        else{
            mp[rem]=i;
        }
       }
       return false;
        
    }
};