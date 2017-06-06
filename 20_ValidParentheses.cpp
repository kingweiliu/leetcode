#include <string>
#include <stack>
#include <iostream>

using std::string;
using std::stack;

class Solution {
public:
    bool isValid(string s) {
        stack<char> ss;
        for (int i = 0; i < s.length(); ++i) {
        	if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
        		ss.push(s[i]);
        	} else if (s[i] == ')') {
        		if (ss.empty() || ss.top() != '(') {
        			return false;
        		} 
        		ss.pop();
        	} else if (s[i] == ']') {
        		if (ss.empty() || ss.top() != '[' ) {
        			return false;	
        		} 
        		ss.pop();
        	} else if (s[i] == '}') {
        		if (ss.empty() || ss.top() != '{') {
        			return false;
        		} 
        		ss.pop();
        	}        	
        }
        return ss.empty();
    }
};

int main() {
	Solution s;
	std::cout << s.isValid("]") << std::endl;
}