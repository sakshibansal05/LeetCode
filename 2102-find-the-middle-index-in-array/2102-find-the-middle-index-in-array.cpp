class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        

        int totalSum = 0, leftSum = 0;
        // Calculate the total sum of the array
        for (int num : nums) {
            totalSum += num;
        }

        // Iterate through the array to find the pivot index
        for (int i = 0; i < nums.size(); i++) {
            // Right sum = totalSum - leftSum - nums[i]
            if (leftSum == totalSum - leftSum - nums[i]) {
                return i;
            }
            // Update left sum
            leftSum += nums[i];
        }

        return -1; // No pivot index found
    }
};

 