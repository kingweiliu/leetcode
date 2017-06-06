#include <string>
#include <iostream>

class Solution {
public:
    int romanToInt(std::string s) {
        int ret = 0;
        for(int idx = 0; idx < s.length(); ++idx) {
        	ret = ret * 10 + s[idx] - '0';
        }
        return ret;
    }
};

int main() {
	Solution ss;
	std::cout << ss.romanToInt("123") << std::endl;
}