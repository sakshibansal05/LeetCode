class NumArray {
vector<int> leftsum;
public:
    NumArray(vector<int>& nums) {
        leftsum.resize(nums.size());
        leftsum[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            leftsum[i]=leftsum[i-1]+nums[i];
        }

    }
    
    int sumRange(int left, int right) {
        if(left==0) return leftsum[right];
        return leftsum[right]-leftsum[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */