class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>suf(n,1), ans(n,1);
        for(int i=1;i<n;i++){
            ans[i] = nums[i-1]*ans[i-1];
            suf[n-i-1] = nums[n-i]*suf[n-i];
        }
        for(int i=0;i<n;i++){
            ans[i] *= suf[i];
        }
        return ans;
    }
};
