class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int left = 0;
        int freq1[256]={0};
        int freq2[256]={0};
        for(char c: s1){
            freq1[c]++;
        }
        for(int right = 0;right<s2.size();right++){
            freq2[s2[right]]++;
            while(right-left+1 > s1.size()){
                freq2[s2[left]]--;
                left++;
            
            }
            bool same = true;
        for(int i = 0;i<256;i++){
            if(freq1[i]!=freq2[i]){
                same = false;
                break;
            }
    
        }
        if(same){
            return true;
        }
        }
        return false;
        
    }
};