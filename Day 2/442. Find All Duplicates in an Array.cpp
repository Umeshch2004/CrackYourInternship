//Link: https://leetcode.com/problems/find-all-duplicates-in-an-array/description/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        
        for(auto num: nums)
        {
            nums[abs(num)-1] *= -1;
        }

        for(auto num : nums)
        {
            if(nums[abs(num)-1] > 0)
            {
                ans.push_back(abs(num));
            }

            nums[abs(num)-1] *= -1;

        }
        return ans;
    }
};