class Solution {
public:
    int maxArea(vector<int>& h) {
        int n=h.size(), i=0, j=n-1, ans=0;
        while(i<j){
            int tempArea = min(h[i],h[j]) * (j-i);
            ans = max(ans,tempArea);
            if(h[i]<h[j]){
                i++;
            }else{
                j--;
            }
        }
        return ans;
    }
};
