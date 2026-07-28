class Solution {
public:
    struct ArrayHash{
        size_t operator()(const array<int,26>& arr)const{
            size_t hash = 0;
            for(int x:arr){
               hash = hash*37 + x;
            }
            return hash;
        }
    };
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<array<int,26>, vector<string>, ArrayHash>mp; 
        vector<vector<string>>ans;
        int n = strs.size();
        for(int i=0;i<n;i++){
            string s = strs[i];
            array<int,26>freq{};
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
