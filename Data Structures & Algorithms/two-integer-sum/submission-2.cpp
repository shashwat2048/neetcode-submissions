class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int n = nums.size();
        mp[nums[0]]=0;
        for(int i=0;i<n;i++){

            if(mp.find(target - nums[i]) != mp.end()){
                int x = mp[target - nums[i]];
                if( x >= 0 && x!=i){
                    if(x>i) return {i,x};
                    else return {x,i};
                }
            }
            mp[nums[i]]=i;
        }
        return{-1,-1};
    }
};
