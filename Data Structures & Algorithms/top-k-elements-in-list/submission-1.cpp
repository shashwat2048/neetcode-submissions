class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n = nums.size();
        vector<int>ans;
        vector<vector<int>>bkt(n+1);
        for(int x:nums){
            mp[x]++;
        }
        for(auto a:mp){
            bkt[a.second].push_back(a.first);
        }
        for(int i=n;i>0;i--){
            for(int x:bkt[i]){
                ans.push_back(x);
                if(ans.size()==k) return ans;
            }
        }
        return ans;
    }
};
