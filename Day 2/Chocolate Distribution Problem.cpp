//Link: https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    long long ans = 1e09;
    
    
    sort(a.begin(), a.end());
    
    int i=0;
    int j = i+(m-1);
    
    while(j<n)
    {
        ans = min(ans, a[j]-a[i]);
        i++;
        j++;
    }
    
    return ans;
    
    }   
};