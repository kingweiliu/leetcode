#include <iostream>
#include <string>
#include <algorithm> 
#include <sstream>

/*
如果判断溢出？
*/

class Solution {
public:
    int reverse(int x) {
		int ans = 0;
		while (x) {
			int temp = ans * 10 + x % 10;
			if (temp / 10 != ans) {
				return 0;
			}
			ans = temp;
			x = x / 10;
		}
		return ans;
    }
};

int main () {
	Solution s;
	std::cout << s.reverse(-123) << std::endl;
}