class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int ans = 0;
        int final = 0;
        while(left<right){
            ans = min(height[left],height[right])*(right-left);
            final = max(final,ans);
            if(height[left]<height[right]){
            left++;
        }
        else{
            right--;
        }
        }
        
        return final;
    }
};