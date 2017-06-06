#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <iterator>

using std::multimap;
using std::vector;

/*
问题1. 	std::copy(case1, case1 + 3, std::back_inserter(nums));， 如果是 std::copy(case1, case1 + 3, nums.begin()); 会出core；
		因为目标容器的大小必须大于等于源容器的大小；
问题2. 	multimap的使用， equal_range用来找到对应的key所有的kv对；insert插入 pair对。
问题3.  刚开始用的是map， 对于一个值在不同位置出现多次的问题不能解决；
问题4. 	数组定义  int a[] = { 1, 2, 3, 4};

*/

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
					std::sort(v_ret.begin(), v_ret.end());
					return v_ret;
				}
			}
		}
		
		return v_ret;
    }
};

int main() {
	std::vector<int> nums;
	
	int case1[] = {2, 7, 11, 15};
	
	std::copy(case1, case1 + 3, std::back_inserter(nums));
	Solution s;
	
	std::vector<int> ret = s.twoSum(nums, 9);
	for (int i = 0; i < ret.size(); ++i) {
		std::cout << ret[i] << std::endl;
	}

	int case2[] = { 3, 3};
	nums.clear();
	std::cout <<"case2" <<std::endl;
	std::copy(case2, case2 + 2, std::back_inserter(nums));
	ret = s.twoSum(nums, 6);
	for (int i = 0; i < ret.size(); ++i) {
		std::cout << ret[i] << std::endl;
	}	


}
