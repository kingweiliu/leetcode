#include <string>
#include <iostream>
using std::string;

class Solution {
public:
    int strStr(string haystack, string needle) {
        for (int i = 0; i <= (int)haystack.length() - (int)needle.length(); ++i) {
            int k = 0;
            while (k < needle.length() && haystack[i + k] == needle[k])
                k++;
            
            if (k == needle.length())
                return i;
        }
        return -1;
    }
};

int main() {
    Solution s;
    std::cout << s.strStr("", "a") << std::endl;
}