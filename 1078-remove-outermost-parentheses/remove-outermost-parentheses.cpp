class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;  // Keeps track of open parentheses count
        string ans;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                if (count > 0){ ans += s[i];  // Append only if it's not the first '('
                 }
                  count++;
            } 
            else { // s[i] == ')'
                count--;
                if (count > 0){ ans += s[i];  // Append only if it's not the last ')'
            }
            }
        }

        return ans;
    }
};
