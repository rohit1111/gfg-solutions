// User function Template for C++

class Solution {
  public:
    int smallestSumSubarray(vector<int>& a) {
        int i=0;
        int bestending=a[i];
        int ans=a[i];
        int n = a.size();
        for(i=1;i<n;i++){
            int v1 = bestending + a[i];
            int v2 = a[i];
            bestending = min(v1,v2);
            ans = min(ans,bestending);
        }
        return ans;
    }
};
