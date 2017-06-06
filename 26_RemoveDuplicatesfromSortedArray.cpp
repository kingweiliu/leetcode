#include <vector>

using std::vector;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
		int last_index = 0;
		
		int i = 1;

		while (i < nums.size()) {
			while (nums[i] == nums[last_index]) i++;
			if (i != last_index && i < nums.size()) {
				nums[++last_index] = nums[i++];
			}			
		}
		if (nums.size() > 0) {
			nums.resize(last_index + 1);
		}
		return nums.size();
    }
};