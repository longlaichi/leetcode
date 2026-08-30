class Solution {
public:

    int countSubstrings(string s) {
        int rest = 0;
       for(int i = 0;i<s.size();i++){
        for(int j = i;j<s.size();j++){
            if( ispalindrome(s,i,j) == true){
                    rest++;
            }
        }
       }
       return rest;

    }
    bool ispalindrome(string s,int i,int j){
    
    while(i<j){
        if(s[i]!=s[j]){
            return false;
            
        }
        i++;
        j--;
    }
    return true;
}
};