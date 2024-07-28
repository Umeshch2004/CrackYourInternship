//Link: https://leetcode.com/problems/subarray-sums-divisible-by-k/description/

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int rem=0;
        int sum=0;
        int ans=0;
        int n=nums.size();
        unordered_map<int, int>m;

        m[rem]++;
        for(int i=0;i<n;i++)
        {
            
            sum += nums[i];
            rem = sum%k;

            if(rem<0)
            {
                rem += k;
            }

            if(m.find(rem)!=m.end()){
                ans += m[rem];
            }
            m[rem]++;
        }

        return ans;
    }
};