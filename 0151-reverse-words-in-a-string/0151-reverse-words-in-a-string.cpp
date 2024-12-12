class Solution {
public:
    string reverseWords(string s) {
        string ans;   // To store the final reversed words string
        string help;  // To temporarily store the current word
        
        // Loop through the string from end to start
        for (int i = s.length() - 1; i >= 0; --i) {
            // When encountering a space, process the word
            if (s[i] == ' ') {
                if (!help.empty()) {
                    // Reverse the current word and add it to the result
                    reverse(help.begin(), help.end());
                    ans += help;
                    ans += ' ';  // Add a space after the word
                    help.clear();  // Reset help for the next word
                }
            } else {
                // Build the word in reverse order (since we're iterating from the end)
                help += s[i];
            }
        }

        // After the loop, there might still be a word in help
        if (!help.empty()) {
            reverse(help.begin(), help.end());
            ans += help;
        }

        // If there's a trailing space at the end, remove it
        if (!ans.empty() && ans.back() == ' ') {
            ans.pop_back();
        }

        return ans;
    }
};
