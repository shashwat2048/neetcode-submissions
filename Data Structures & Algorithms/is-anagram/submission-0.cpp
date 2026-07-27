class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>m1,m2;
        int n = s.size();
        if(n!=t.size()){return false;}

        for(int i=0;i<n;i++){
            m1[s[i]]++;
            m2[t[i]]++;
        }

        for(int i=0;i<n;i++){
            if(m1[s[i]]!=m2[s[i]]){return false;}
        }
        return true;
    }
};


