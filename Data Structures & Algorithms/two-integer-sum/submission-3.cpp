class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int n = nums.size();
        for(int a=0;a<n;a++){
            int need = target - nums[a];
            if(mp.find(need) != mp.end()){
                int b = mp[need];
                if(b>a) return {a,b};
                else return {b,a};
            }
            mp[nums[a]]=a;
        }
        return{-1,-1};
    }
};
