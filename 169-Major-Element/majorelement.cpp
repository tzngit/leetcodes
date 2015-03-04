
class Solution {
public:
        int majorityElement(vector<int> &num) {
                int nCount = 0;
                int major;
                int nLength = num.size();
                for (int i=0; i<nLength; ++i) {
                        if(nCount == 0 || major == num[i]) {
                                major = num[i];
                                ++nCount;
                        } else {
                                --nCount;
                        }
                }
                return major;
        }
};
