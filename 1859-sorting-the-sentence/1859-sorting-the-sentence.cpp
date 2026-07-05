class Solution {
public:
    string sortSentence(string s) {
        int n = s.size();
        vector<string> ans(10);
        int i = 0;
        int count = 0;
        string temp;

        while (i < n) {
            if (s[i] == ' ') {
                int pos = temp.back() - '0';
                temp.pop_back();

                ans[pos] = temp;
                temp.clear();
                count++;
            } else {
                temp += s[i];
            }
            i++;
        }

        // Process the last word
        int pos = temp.back() - '0';
        temp.pop_back();
        ans[pos] = temp;

        temp.clear();

        for (int i = 1; i <= count + 1; i++) {
            temp += ans[i];
            temp += ' ';
        }

        temp.pop_back();
        return temp;
    }
};