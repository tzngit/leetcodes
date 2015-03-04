
class Solution {
public:
        string convertToTitle(int n) {
                int t;
                string title;
                string::iterator it;
                for (; n != 0;) {
                        t = n % 26;
                        if (t) {
                                title.insert(0, 1, 'A' + t - 1);
                                n /= 26;
                        }
                        else {
                                title.insert(0, 1, 'Z');
                                n = n/26-1;
                        }
                }
                return title;
        }
};
