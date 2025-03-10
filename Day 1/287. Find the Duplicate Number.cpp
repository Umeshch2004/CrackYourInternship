//Link: https://leetcode.com/problems/find-the-duplicate-number/description/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[nums[0]];

        while(slow!=fast)
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }

        fast = 0;

        while(slow!=fast)
        {
            fast = nums[fast];
            slow = nums[slow];
        }
        return slow;
    }

};