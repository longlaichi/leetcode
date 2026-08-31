class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int pcount[26] = {};
int scount[26] = {};
        vector<int> result;
        for(char c:p){
            pcount[c-'a']++;

        } 
        for(int i = 0;i<s.size();i++){
            scount[s[i] - 'a']++;
            

            if(i>=p.size()){
                scount[s[i-p.size()]-'a']--;
            }
            if(equal(pcount, pcount + 26, scount)){
                result.push_back(i-p.size()+1);
            }
        }
        return result;
    }
};