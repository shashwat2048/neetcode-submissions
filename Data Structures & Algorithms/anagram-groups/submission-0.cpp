class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>>mp;
        vector<vector<string>>ans;
        int n = strs.size();
        for(int i=0;i<n;i++){
            string s = strs[i];
            vector<int>freq(26,0);
            for(int j=0;j<s.size();j++){
                freq[s[j]-'a']++;
            }
            mp[freq].push_back(s);
        }
        for(auto &x:mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};
