#include <iostream>


class Solution {
public:
    bool isPalindrome(int x) {
        int ans = 0;
        if (x < 0)
        	return false;
        if (x == 0){
        	return true;
        }

        while (x >= ans) {
        	if (ans == x)
        		return true;
        	int temp = ans * 10 + x % 10;
        	if (temp == x) {
        		return true;
        	}
        	ans = temp;
        	x = x / 10;
        }
        return false;
    }
};

int main() {
	Solution s;
	std::cout << s.isPalindrome(123) << std::endl;
	std::cout << s.isPalindrome(2323232) << std::endl;
	std::cout << s.isPalindrome(-2147447412) << std::endl;
	std::cout << s.isPalindrome(0) << std::endl;
	std::cout << s.isPalindrome(10) << std::endl;
	return 0;
}