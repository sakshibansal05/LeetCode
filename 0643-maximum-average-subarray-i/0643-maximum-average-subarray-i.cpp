class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        // Calculate the sum of the first 'k' elements.
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        
        double maxi = sum;
        
        // Now, slide the window and calculate the sum for the remaining subarrays of length 'k'.
        for (int i = k; i < nums.size(); i++) {
            sum += nums[i] - nums[i - k];  // Add the new element, remove the old one from the sum.
            maxi = max(maxi, sum);  // Track the maximum sum.
        }
        
        return maxi / k;  // Return the maximum average.
    }
};
