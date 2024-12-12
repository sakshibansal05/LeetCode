class Solution {
    public String largestOddNumber(String num) {
        int i = num.length() - 1;
        if ((num.charAt(i) - '0') % 2 != 0) {
            return num;
        }
       while (i >= 0) {
            if ((num.charAt(i) - '0') % 2 != 0) {
                return num.substring(0, i + 1);
            }
            i--;
        }
        return "";
    }
}
