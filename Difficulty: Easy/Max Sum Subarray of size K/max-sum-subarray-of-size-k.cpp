class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        int start=0;
        int end=k-1;
        int sum=0;
        for(int i=start;i<=end;i++){
            sum = sum + arr[i];
        }
        int res=INT_MIN;
        while(end<n){
            res = max(res,sum);
            
            start++;
            end++;
            
            if(end == n){
                break;
            }
            
            sum = sum - arr[start-1];
            sum = sum + arr[end];
        }
        return res;
    }
};