//Link: https://leetcode.com/problems/container-with-most-water/description/

class Solution {
public:
    int maxArea(vector<int>& height) {
       int left = 0;
       int ans = 0;
       int n = height.size();
       int right = n-1; 

       while(left<=right)
       {
        ans = max(min(height[left],height[right])* (right-left), ans);

        if(height[left]<height[right])
        {
            left++;
        } 
        else{
            right--;
        }
       }
       return ans;
    }
};