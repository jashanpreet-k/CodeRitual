class Solution {
public:
    string sortVowels(string s) {
        int n = s.size();

        vector<int> lower(26, 0);
        vector<int> upper(26, 0);

    
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
                s[i] == 'o' || s[i] == 'u') {
                lower[s[i] - 'a']++;
                s[i] = '#';
            }
        }

      
        for (int i = 0; i < n; i++) {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                s[i] == 'O' || s[i] == 'U') {
                upper[s[i] - 'A']++;
                s[i] = '#';
            }
        }

        string ans;
        ans.reserve(n);

        
        for (int i = 0; i < 26; i++) {
            while (upper[i]--) {
                ans += char('A' + i);
            }
        }

        
        for (int i = 0; i < 26; i++) {
            while (lower[i]--) {
                ans += char('a' + i);
            }
        }

        int first = 0, second = 0;

        while (second < ans.size()) {
            if (s[first] == '#') {
                s[first] = ans[second++];
            }
            first++;
        }

        return s;
    }
};