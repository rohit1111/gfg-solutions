class Solution {
  public:
         int missingNum(vector<int>& arr) {
                long long n = arr.size();
                long long m = n+1;
                long long totalSum = m * (m+1)/2; // 5 * (5+1) /2 == 15 
                // 1 + 2 + 3 + 4 + 5 = 15
                for(int i=0; i<n;i++){
                        totalSum -= arr[i];
                }
                return totalSum;
         }
};