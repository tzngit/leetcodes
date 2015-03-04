class Solution {
public:
    int titleToNumber(string s) {
        int nLength = s.length();
        int nColumn = 0;
        int nTmp = 1;
        for (int i=nLength-1; i>=0; --i) {
            nColumn += (s[i] - 'A' + 1) * nTmp;
            nTmp *= 26;
        }
        return nColumn;
    }
};
