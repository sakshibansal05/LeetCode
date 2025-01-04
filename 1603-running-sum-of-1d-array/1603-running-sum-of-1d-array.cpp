class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>running(n);
        running[0]=nums[0];
        for(int i=1;i<n;i++){
            running[i]=running[i-1]+nums[i];
            // cout<<running[i]<<" ";
        }
        return running;
    }  
    
};