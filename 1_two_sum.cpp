#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using std::multimap;
using std::vector;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
		std::multimap<int, int> map_v_index;
		for (int index = 0; index < nums.size(); ++index) {
			map_v_index.insert(std::pair<int, int>(nums[index], index));
		}
		std::vector<int> v_ret;
		std::pair<std::multimap<int, int>::iterator, std::multimap<int, int>::iterator> equal_range;
		for (std::multimap<int, int>::iterator v = map_v_index.begin(); v != map_v_index.end(); ++v) {
			equal_range = map_v_index.equal_range(target - v->first);
			for (std::multimap<int, int>::iterator iter_start = equal_range.first; iter_start != equal_range.second; ++iter_start) {
				if (iter_start->second != v->second) {
					v_ret.push_back(v->second);
					v_ret.push_back(iter_start->second);	
					break;
				}
			}
		}
		std::sort(v_ret.begin(), v_ret.end());
		return v_ret;
    }
};

int main() {
	std::vector<int> nums;
	std::cout << "haha2";
	int case1[] = {2, 7, 11, 15};
	std::cout << "haha1";
	std::copy(case1, case1+3, nums.begin());
	Solution s;
	std::cout << "haha";
	std::vector<int> ret = s.twoSum(nums, 9);
	// for (int i = 0; i < ret.size(); ++i) {
	// 	std::cout << ret[i] << std::endl;
	// }
}
