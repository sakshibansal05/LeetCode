#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // If str1 + str2 is not equal to str2 + str1, no common divisor exists
        if (str1 + str2 != str2 + str1) {
            return "";
        }

        // Find the greatest common divisor (GCD) of the lengths of str1 and str2
        int gcd_length = gcd(str1.size(), str2.size());

        // The candidate string is the prefix of str1 with length gcd_length
        string candidate = str1.substr(0, gcd_length);

        // Check if repeating the candidate forms both str1 and str2
        if (str1 == repeatString(candidate, str1.size()) && 
            str2 == repeatString(candidate, str2.size())) {
            return candidate;
        }

        return "";
    }

private:
    // Helper function to repeat a string `candidate` n times
    string repeatString(const string& candidate, int n) {
        string result = "";
        int repeatCount = n / candidate.size();
        for (int i = 0; i < repeatCount; i++) {
            result += candidate;
        }
        return result;
    }
};