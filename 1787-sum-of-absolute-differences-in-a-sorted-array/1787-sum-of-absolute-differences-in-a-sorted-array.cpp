class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n);
        int sum=0;
        int prefix=0;
        
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }

        for(int i=0;i<n;i++){
            int leftSum=(-prefix+nums[i]*i);
            int rightSum=((sum-prefix-nums[i])-(n-i-1)*nums[i]);

            result[i]=leftSum+rightSum;

            prefix+=nums[i];
        }
        return result;
    }
};