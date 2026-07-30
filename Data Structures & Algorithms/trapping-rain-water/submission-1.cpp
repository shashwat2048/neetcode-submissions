class Solution {
public:
    int trap(vector<int>& h) {
        int n=h.size(), i=0, j=i+1;
        vector<int>maxlh(n),maxrh(n);
        maxlh[0]=h[0];
        for(int i=1;i<n;i++){
            maxlh[i] = max(maxlh[i-1],h[i]);
        }
        maxrh[n-1]=h[n-1];
        for(int i=n-2;i>=0;i--){
            maxrh[i] = max(maxrh[i+1],h[i]);
        }
        int water=0;
        for(int i=0;i<n;i++){
            water+= min(maxlh[i],maxrh[i]) - h[i];
        }
        return water;
    }
};
