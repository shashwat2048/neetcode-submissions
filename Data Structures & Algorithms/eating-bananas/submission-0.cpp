class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size(), r = *max_element(piles.begin(), piles.end()), l=1, ans=0;
        while(l<=r){
            double mid = l + (r-l)/2;
            int time = 0;
            for(double p:piles){
                time += ceil(p/mid);
            }
            if(time<=h){
                ans = mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }
};
