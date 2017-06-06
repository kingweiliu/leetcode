#include <vector>
#include <string>
#include <iostream>
using std::string;
using std::vector;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result;
        if (strs.size() > 0) {
        	result = strs[0];
        }
        for (int i = 1; i < strs.size(); ++i) {
        	int idx = 0; 
        	for (;idx < result.size(); ++idx) {
        		if (result[idx] != strs[i][idx])
        			break;
        	}
        	if (idx != result.size()) {
        		result.resize(idx);
        	}
        }
        return result;

    }
};

int main() {
	Solution ss;
	std::vector<std::string> v;
	v.push_back("1234556");
	v.push_back("12343556");
	v.push_back("123413556");
	std::cout << ss.longestCommonPrefix(v) << std::endl;
}