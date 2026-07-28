class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        if(n!=t.size()){return false;}
        vector<int>freq(26,0);

        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            if(--freq[t[i]-'a'] < 0){return false;}
        }
        return true;
    }
};


