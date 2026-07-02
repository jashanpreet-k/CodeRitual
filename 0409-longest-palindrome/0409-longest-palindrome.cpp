class Solution {
public:
    int longestPalindrome(string s) {
         vector<int>lower(26,0);
          vector<int>upper(26,0);
          int n = s.size();

          for(int i=0;i<n;i++){
            if(s[i] >= 'a'){
                lower[s[i] - 'a']++;
            }
             else{
                upper[s[i] - 'A']++;
            }
          }
          int count = 0;
          bool odd = false;
          for(int i=0;i<26;i++){
            if(lower[i]%2 == 0){
                count = count + lower[i];
            }
            else{
                count = count + lower[i] - 1;
                odd = true;
            }
          }
          for(int i=0;i<26;i++){
            if(upper[i]%2 == 0){
                count = count + upper[i];
            }
            else{
                count = count + upper[i] - 1;
                odd = true;
            }
          }



     return count+odd;   
        
    }
};