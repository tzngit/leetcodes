
class Solution {
public:
    int compareVersion(string version1, string version2) {
        bool stop1 = false, stop2 = false;
        int nLength1 = version1.size();
        int nLength2 = version2.size();
        int it1 = 0, temp1 = 0;
        int it2 = 0, temp2 = 0;
        int v1 = 0, v2 = 0;

        for (; it1 < nLength1 || it2 < nLength2;) {
            if (!stop1 && it1 < nLength1 ) {
                if (version1[it1] == '.') {
                    v1 = atoi(version1.substr(temp1, it1 - temp1).c_str());
                    stop1 = true;
                }
                else if (it1 + 1 == nLength1) {
                    v1 = atoi(version1.substr(temp1, it1 + 1 - temp1).c_str());
                    stop1 = true;
                }
                ++it1;
            }

            if (!stop2 && it2 < nLength2)
            {
                if (version2[it2] == '.') {
                    v2 = atoi(version2.substr(temp2, it2 - temp2).c_str());
                    stop2 = true;
                }
                else if (it2 + 1 == nLength2) {
                    v2 = atoi(version2.substr(temp2, it2+1 - temp2).c_str());
                    stop2 = true;
                }
                ++it2;
            }

            if (stop1 && stop2) {
                if (v1 > v2)
                    return 1;
                else if (v1 < v2)
                    return -1;
                v1 = v2 = 0;
                temp1 = it1;
                temp2 = it2;
                if (it1 != nLength1) stop1 = false;
                if (it2 != nLength2) stop2 = false;
            }
        }
        return 0;
    }
};
