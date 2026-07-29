class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        int ans=0;
        for(int x:nums){
            st.insert(x);
        }
        for(int y:nums){
            int temp=y;
            int len=0;
            if(!st.count(y-1)){
                while(st.count(temp)){
                    temp++;
                    len++;
                }
            }
            ans=max(ans,len);
        }
        return ans;
    }
};
