#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <typeinfo>
using namespace std;

class Solution {
public:
    void rotate(int nums[], int n, int k) {
        vector<int> num(n);
        for(int i=0; i<n; ++i) {
            num[i] = nums[i];
        }
        std::rotate(num.begin(), num.begin()+k+1, num.end());
        for (int i=0; i<n; i++) {
            nums[i] = num[i];
        }

    }
    void rotate2(int nums[], int n, int k) {
        for (; k %= n; n -= k) {
            for (int i=0; i<k; i++) {
                swap(*nums++, nums[n-k]);
            }
        }
    }
    void display(int nums[], int n) {
        for (int i = 0; i < n; i++) {
            cout << nums[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    // cout << it::iterator_category << endl;
    cout << typeid(vector<int>::iterator::iterator_category).name() << endl;

    Solution s;
    int a[7] = {1,2,3,4,5,6,7};
    s.display(a, 7);
    s.rotate(a, 7, 3);
    s.display(a, 7);

}
