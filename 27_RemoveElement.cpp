#include <vector>
using std::vector;

/*

*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int i = 0;
        for (int n = 0; n < nums.size(); n++) {
        	if (nums[n] != val) {
        		if (n != i) 
        			nums[i] = nums[n];
        		i++;	
        	} 
        }
        return i;
    }
};