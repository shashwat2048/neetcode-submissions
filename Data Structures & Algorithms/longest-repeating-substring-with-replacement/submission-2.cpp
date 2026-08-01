class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int i=0,j=0,n=s.size(), ans=0, mf=0;
        char mc;
        while(j<n){
            mp[s[j]]++;
            mf = max(mf,mp[s[j]]);
            while((j-i+1-k) > mf){
                mp[s[i]]--;
                i++;
            }
            ans = max(ans, j-i+1);
            j++;
        }
        return ans;
    }
};
