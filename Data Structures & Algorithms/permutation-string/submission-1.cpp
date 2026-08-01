class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>key(26,0), spare(26,0);
        int win = s1.size(), i=0, j=0, n=s2.size();
        for(char x:s1){
            key[x-'a']+=1;
        }
        while(j<n){
            spare[s2[j]-'a']+=1;
            if(j-i+1 > win){
                spare[s2[i]-'a']-=1;
                i++;
            }
            if(key==spare){
                return true;
            }
            j++;
        }
        return false;
    }
};
