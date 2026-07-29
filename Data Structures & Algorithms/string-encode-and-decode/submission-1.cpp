class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        for(string y:strs){
            int x = y.size();
            s = s + to_string(x) + "#" + y;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        int i =0;
        while(i<s.size()){
            string x = "";
            while(s[i]!='#'){
                x = x + s[i];
                i++;
            }
            i++;
            int size = stoi(x);
            string word = "";
            while(size--){
                word = word + s[i];
                i++;
            }
            ans.push_back(word);
            
        }
        return ans;
    }
};
