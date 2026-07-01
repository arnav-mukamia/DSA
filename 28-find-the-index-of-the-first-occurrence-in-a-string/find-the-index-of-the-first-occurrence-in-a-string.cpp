class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();

        for (int i = 0; i <= n ; i++) { 
            int j = 0;

            while (j < m && haystack[i + j] == needle[j]) { // 0+0=0 -> s == s
                j++;
            }

            if (j == m) {
                return i;
            }
        }

        return -1;
    }
};