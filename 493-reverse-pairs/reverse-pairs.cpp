class Solution {
public:
    int reversePairs(vector<int>& nums, int low, int mid, int high) {
        int i = low;
        int j = mid+1;
        int count  = 0;
        vector<int> temp;
        for(int i = low;i<=mid;i++){
            while(j<=high && nums[i]>2LL*nums[j]){
                j++;
            }
            count+=j-(mid+1);
        }
            i = low;
            j = mid+1;
            while(i<=mid && j<=high){
                if(nums[i]<=nums[j]){
                temp.push_back(nums[i]);
                i++;
            }
            else{
                temp.push_back(nums[j]);
                j++;
                }
                
            }
            
            while(i<=mid){
                temp.push_back(nums[i]);
                i++;
            }
            while(j<=high){
                temp.push_back(nums[j]);
                j++;
            }
            int x  = 0;
            for(int k = low;k<=high;k++){
                nums[k] = temp[x];
                x++;
            }
            return count;
            

        }
        int mergesort(vector<int>& nums,int low, int high){
            if(low>=high){
                return 0;
            }
            int mid = low+(high-low)/2;
            int count = mergesort(nums, low, mid);
            count += mergesort(nums, mid + 1, high);
            count += reversePairs(nums, low, mid, high);

            return count;
    }
    int reversePairs(vector<int>& nums) {
        return mergesort(nums, 0, (int)nums.size() - 1);
    }
};