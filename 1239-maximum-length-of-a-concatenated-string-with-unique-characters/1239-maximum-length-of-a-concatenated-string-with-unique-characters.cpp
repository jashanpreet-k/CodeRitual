
class Solution {
public:
    bool hasDuplicate(string &s1, string &s2) {
        int arr[26] = {0};

        for (char ch : s1) {
            if (arr[ch - 'a'] > 0) {
                return true;
            }
            arr[ch - 'a']++;
        }

        for (char ch : s2) {
            if (arr[ch - 'a'] > 0) {
                return true;
            }
            arr[ch - 'a']++;
        }

        return false;
    }

    unordered_map<string, int> mp;

    int solve(int i, vector<string>& arr, string temp, int n) {
        if (i >= n) {
            return temp.length();
        }

        string key = to_string(i) + "#" + temp;

        if (mp.find(key) != mp.end()) {
            return mp[key];
        }

        int include = 0;
        int exclude = solve(i + 1, arr, temp, n);

        if (!hasDuplicate(temp, arr[i])) {
            include = solve(i + 1, arr, temp + arr[i], n);
        }

        return mp[key] = max(include, exclude);
    }

    int maxLength(vector<string>& arr) {
        mp.clear();
        return solve(0, arr, "", arr.size());
    }
};
