class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> left(nums.size());
        vector<int> right(nums.size());
        vector<int> ans(nums.size());
        int n=nums.size();
        left[0]=0;
        right[n-1]=0;
        for(int i=1;i<nums.size();i++){
            left[i]=left[i-1]+nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            right[i]=right[i+1]+nums[i+1];
        }
        for(int i=0;i<n;i++){
            ans[i]=left[i]-right[i];
            ans[i]=abs(ans[i]);
        }
        return ans;
    }
};