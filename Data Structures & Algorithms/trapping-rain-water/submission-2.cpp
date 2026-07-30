class Solution {
public:
    int trap(vector<int>& h) {
        int n=h.size(), water=0, maxlh=0;
        vector<int>maxrh(n);
        maxrh[n-1]=h[n-1];
        for(int i=1;i<n;i++){
            maxrh[n-1-i] = max(maxrh[n-i],h[n-1-i]);
        }
        for(int i=0;i<n;i++){
            maxlh = max(maxlh,h[i]);
            water+= min(maxlh,maxrh[i]) - h[i];
        }
        return water;
    }
};
