
class Solution {
public:
        bool isPalindrome(string s) {
                int i = 0, j = s.size()-1;
                bool bIsPalindrome = true;
                while (i < j) {
                        if (!isalnum(s[i])) {
                                i++;
                                continue;;
                        }

                        if (!isalnum(s[j])) {
                                j--;
                                continue;
                        }

                        s[i] = tolower(s[i]);
                        s[j] = tolower(s[j]);
                        if (s[i++] != s[j--])
                        {
                                bIsPalindrome = false;
                                break;
                        } else {
                                bIsPalindrome = true;
                        }
                }
                return bIsPalindrome;
        }
};
