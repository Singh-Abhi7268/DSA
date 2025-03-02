class Solution {
public:
    int beautySum(string s) {
        int totalBeauty = 0;
        
        // Iterate over all starting indices
        for (int i = 0; i < s.length(); i++) {
            vector<int> freq(26, 0);  // Frequency array for characters
            
            // Expand the substring from i to j
            for (int j = i; j < s.length(); j++) {
                freq[s[j] - 'a']++; // Update frequency of current character
                
                int maxFreq = INT_MIN;
                int minFreq = INT_MAX;
                
                // Calculate max and min frequency in current substring
                for (int k = 0; k < 26; k++) {
                    if (freq[k] > 0) { // Consider only characters present
                        maxFreq = max(maxFreq, freq[k]);
                        minFreq = min(minFreq, freq[k]);
                    }
                }
                
                totalBeauty += (maxFreq - minFreq); // Add beauty to total sum
            }
        }
        
        return totalBeauty;
    }
};


