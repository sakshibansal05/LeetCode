class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        
        // If no flowers need to be planted, return true
        if (n == 0) return true;
        
        // Special case for a flowerbed with one element
        if (size == 1) return (flowerbed[0] == 0 && n == 1);
        
        // Iterate through the flowerbed
        for (int i = 0; i < size; i++) {
            // If the current position is empty (0)
            if (flowerbed[i] == 0) {
                // Check if we can plant a flower:
                // 1. If it's the first position, ensure the next position is empty.
                // 2. If it's the last position, ensure the previous position is empty.
                // 3. If it's any other position, ensure both neighbors are empty.
                if ((i == 0 || flowerbed[i - 1] == 0) && (i == size - 1 || flowerbed[i + 1] == 0)) {
                    flowerbed[i] = 1;  // Plant a flower
                    n--;  // Decrease the count of flowers we need to plant
                    if (n == 0) return true;  // If all flowers are planted, return true
                    i++;  // Skip the next position since we just planted a flower here
                }
            }
        }
        
        // Return true if we've planted all n flowers, otherwise false
        return n <= 0;
    }
};
