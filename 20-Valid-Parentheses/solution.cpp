class Solution {
public:
    bool isValid(string s) {
        char c;
        int nLength = s.length();
        list<char> stack;
        for(int i=0; i<nLength; ++i) {
            c = s[i];
            switch(c) {
                case '(':
                    stack.push_back(c);
                    break;
                case '{':
                    stack.push_back(c);
                    break;
                case '[':
                    stack.push_back(c);
                    break;
                case ')':
                    if (!stack.empty() && stack.back() == '(') {
                        stack.pop_back();
                    } else {
                        return false;
                    }
                    break;
                case '}':
                    if (!stack.empty() && stack.back() == '{') {
                        stack.pop_back();
                    } else {
                        return false;
                    }
                    break;
                case ']':
                    if (!stack.empty() && stack.back() == '[') {
                        stack.pop_back();
                    } else {
                        return false;
                    }
                    break;
                default:
                    return false;
                    break;
            }
        }
    if (!stack.empty()) return false;
    return true;
    }
};
