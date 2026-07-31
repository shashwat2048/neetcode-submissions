class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int i=0, ans=0, n=s.size(), j=0;
        string t="";
        while(j<n){
            mp[s[j]]+=1;
            while(mp[s[j]]>1){
                mp[s[i]]-=1;
                i++;
            }
            t=s.substr(i, j-i+1);
            int x = t.size();
            ans=max(ans,x);
            j++;
        }
        return ans;
    }
};
