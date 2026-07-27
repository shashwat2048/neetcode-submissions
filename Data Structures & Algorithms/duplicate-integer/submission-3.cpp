class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>st;
        for(int x:nums){
            if(st.count(x)) return true;
            st.insert(x);
        }
        return false;
    }
};