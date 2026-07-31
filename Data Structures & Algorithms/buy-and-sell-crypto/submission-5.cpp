class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(), maxProfit=0, i=0, j=1;
        while(j<n && i<j){
            while(j<n && prices[i]>prices[j]){i++;j++;}
            while(j<n && prices[j]>prices[i]){
                maxProfit=max(maxProfit, prices[j]-prices[i]);
                j++;
            }
            if(j<n && prices[j]<=prices[i]){
                i=j;
                j++;
            }

        }
        return maxProfit;
    }
};
