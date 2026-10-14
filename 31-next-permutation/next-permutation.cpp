class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

        for (int i = n - 2; i >= 0; i--) {

            if (nums[i] < nums[i + 1]) {

                for (int j = n - 1; j > i; j--) {
                    if (nums[j] > nums[i]) {
                        swap(nums[j], nums[i]);
                        break;
                    }
                }

                int left = i + 1;
                int right = n - 1;

                while (left < right) {
                    swap(nums[left], nums[right]);
                    left++;
                    right--;
                }

                return;   // Work is done
            }
        }

        // If no pivot was found, reverse the whole array
        int left = 0;
        int right = n - 1;

        while (left < right) {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }
};