class Solution {
public:
    int maxVal(vector<vector<int>> &arr,int n,int m,int col){
        int maxValue=-1;
        int ind=-1;
        for(int i=0;i<n;i++){
            if(arr[i][col]>maxValue){
                maxValue=arr[i][col];
                ind=i;
            }
        }
        return ind;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int low=0;
        int high=m-1;
        while(low<=high){
            int mid=(low+high)/2;
            int maxi=maxVal(mat,n,m,mid);
            int left=mid-1>=0?mat[maxi][mid-1]:-1;
            int right=mid+1<m?mat[maxi][mid+1]:-1;
           if(mat[maxi][mid]>left && mat[maxi][mid]>right){
            return {maxi,mid};
           }
           else if(mat[maxi][mid]<left) high=mid-1;
           else low=mid+1;
        }
        return {-1,-1};
    }
};