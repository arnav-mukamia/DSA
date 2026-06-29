class Solution {
public:
    void merge(vector<int>& nums1, int m,
               vector<int>& nums2, int n) {

        int i = m - 1; // 2
        int j = n - 1; // 2
        int k = m + n - 1;// 5

        while(i >= 0 && j >= 0) {

            if(nums1[i] > nums2[j]) { //3 > 6 ? False.

                nums1[k] = nums1[i];
                i--;
            }
            else {

                nums1[k] = nums2[j]; //6 is bigger Put 6 at the end
                j--;
            }

            k--;
        }

        while(j >= 0) {

            nums1[k] = nums2[j];

            j--;
            k--;
        }
    }
};