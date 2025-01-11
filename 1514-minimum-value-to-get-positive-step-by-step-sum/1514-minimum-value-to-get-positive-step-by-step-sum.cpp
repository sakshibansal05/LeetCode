class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum=0;
        int minVal=0;
        int ans;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            

            minVal=min(minVal,sum);
            
        }
        return 1-minVal;
    }
};