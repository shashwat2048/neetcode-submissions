class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int i=0, ans=0, n=s.size(), j=0;
        while(j<n){
            mp[s[j]]+=1;
            while(mp[s[j]]>1){
                mp[s[i]]-=1;
                i++;
            }
            ans = max(ans, j-i+1);
            j++;
        }
        return ans;
    }
};
