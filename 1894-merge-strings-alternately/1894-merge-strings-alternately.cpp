#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0, j = 0;
        int n = min(word1.size(), word2.size());
        int m = word1.size() + word2.size();
        string merged = "";

        for (int k = 0; k < 2 * n; k++) {
            if (k % 2 == 0) {
                merged += word1[i++];
            } else {
                merged += word2[j++];
            }
        }

        while (i < word1.size()) {
            merged += word1[i++];
        }

        while (j < word2.size()) {
            merged += word2[j++];
        }

        return merged;
    }
};
