class Solution {
    public int maxProfit(int[] prices) {
        int min=prices[0];
        int max=0;
        for(int i=0;i<prices.length;i++){
            int curr=prices[i]-min;
            max=max>curr?max:curr;
            min=min<prices[i]?min:prices[i];
        }
        return max;
    }
}