
class Solution {
public:
    int minAddToMakeValid(string s) {
        int open_brackets = 0;  // Count of '(' that need closing
        int missing_brackets = 0; // Count of ')' that need opening

        // Loop through each character in the string
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {  
                // Found an opening bracket, expecting a closing bracket later
                open_brackets++;
            } else if (s[i] == ')') {  
                // Found a closing bracket
                if (open_brackets > 0) {  
                    // If there's an unmatched '(', pair it with this ')'
                    open_brackets--;
                } else {  
                    // No matching '(', so this ')' is extra and needs '(' before it
                    missing_brackets++;
                }
            }
        }

        // Total missing brackets = unmatched '(' + unmatched ')'
        return open_brackets + missing_brackets;
    }
};

