class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxlen = 0;
       
        for(int i=0;i<n;i++){
            vector<int> count(255,0);
            for(int j=i;j<n;j++){
                if(count[s[j]] == 1){
                    break;
                }
                count[s[j]] = 1;
           maxlen = max(maxlen , j-i+1); 
        }
        }
       return maxlen; 
    }
};