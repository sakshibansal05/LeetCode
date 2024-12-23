class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=nums[0];
        int i=0,j=0;
        int minSize=INT_MAX;

        while(j<nums.size()){
            if(i==j && nums[i]>=target) return 1;
            else if(i!=j && sum>=target){
                minSize=min(minSize,j-i+1);
                sum-=nums[i];
                i++;
            }
            
            else{
                j++;
                if(j<nums.size()) sum+=nums[j];
            }
        }
        return minSize == INT_MAX ? 0 : minSize;
    }
};