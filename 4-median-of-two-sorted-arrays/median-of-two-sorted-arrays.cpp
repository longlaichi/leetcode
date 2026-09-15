class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        ans.insert(ans.end(),nums1.begin(),nums1.end());
        ans.insert(ans.end(),nums2.begin(),nums2.end());
        sort(ans.begin(),ans.end());
        int low = 0;
        int high = ans.size()-1;
        double fans;
            int mid = low+(high-low)/2;
                if(ans.size()%2!=0){
                   fans=ans[mid];
                }
                else{
                    fans = (ans[mid]+ans[mid+1])/2.0;
                }
            return fans;
        }
        
};