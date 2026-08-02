class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int>need, curr;
        int n=s.size(), i=0, j=0, valid=0;
        string ans="";
        for(char x:t){
            need[x]+=1;
        }
        while(j<n){
            if(need.count(s[j])){
                curr[s[j]]+=1;
                if(curr[s[j]]==need[s[j]]){
                    valid+=1;
                }
            }
            while(valid == need.size()){
                if(ans.empty() || (j-i+1) < ans.size()){
                    ans = s.substr(i, j-i+1);
                }
                if(need.count(s[i])){
                    curr[s[i]]-=1;
                    if(curr[s[i]]<need[s[i]]){
                        valid-=1;
                    }
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};
