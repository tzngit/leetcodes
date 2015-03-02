class Solution {
public:
    void rotate(int nums[], int n, int k) {
        int *tmp = new int[n];
        for (int i=0; i<n; ++i) {
            tmp[(i+k)%n] = nums[i];
        }
        for (int i=0; i<n; ++i) {
            nums[i] = tmp[i];
        }
    }
};
