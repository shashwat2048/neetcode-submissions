class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n = nums.size();
        int temp = k;
        vector<int>ans;
        vector<vector<int>>bkt(n+1);
        for(int x:nums){
            mp[x]++;
        }
        for(auto a:mp){
            bkt[a.second].push_back(a.first);
        }
        for(int i=n;i>0;i--){
            for(int j=bkt[i].size()-1; j>=0; j--){
                ans.push_back(bkt[i][j]);
                k--;
                if(k==0) return ans;
            }
        }
        return ans;
    }
};
