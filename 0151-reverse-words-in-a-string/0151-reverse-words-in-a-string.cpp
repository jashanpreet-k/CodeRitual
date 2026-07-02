class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = "";

        reverse(s.begin(),s.end());
        for(int i=0;i<n;i++){
            string words = "";
            while(s[i]!= ' ' && i<n){
                words = words + s[i];
                i++;
            }
            reverse(words.begin(),words.end());
            if(words.length()>0){
                ans += " " + words;
            }
        }
      return ans.substr(1);
        
    }
};