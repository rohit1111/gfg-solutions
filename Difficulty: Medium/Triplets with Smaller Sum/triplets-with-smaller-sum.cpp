class Solution {

  public:
    long long countTriplets(int n, long long sum, long long arr[]) {
        sort(arr, arr+n);
        int countTrip = 0;
        for(int i=0;i<n-2;i++){
            int start=i+1;
            int end=n-1;
            while(start<end){
                int totalSum = arr[i] + arr[start] + arr[end];
                //if(totalSum < sum){
                //    countTrip++;
                //}
                //cout<<arr[i]<<" "<<arr[start]<<" "<<arr[end]<<endl;
                if(totalSum >= sum){
                    end--;
                }
                else{
                    start++;
                    //end--;
                    countTrip = countTrip + (end - start + 1);
                }
            }
        }
        return countTrip;
    }
};