class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int currentAltitude = 0;
        int maxAltitude = 0;

        for (int i = 0; i < n; i++) {
            currentAltitude += gain[i];
            maxAltitude = max(maxAltitude, currentAltitude);
        }

        return maxAltitude;
    }
};
