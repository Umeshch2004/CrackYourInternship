//link: https://leetcode.com/problems/subarray-sum-equals-k/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int ans=0;
        int sum=0;
        map[0] = 1;
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
            if(map.find(sum-k)!=map.end())
            {
                ans += map[sum-k];
            }
            map[sum]++;
        }

        return ans;
    }
};