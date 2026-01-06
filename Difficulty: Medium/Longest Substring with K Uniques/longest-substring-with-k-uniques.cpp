class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        int start=0;
        int end=0;
        unordered_map<int,int> freq;
        int res=INT_MIN;
        int n = s.size();
        for(end=0;end<n;end++){
            freq[s[end]]++;
            
            while(freq.size() > k){
                freq[s[start]]--;
                if(freq[s[start]] == 0){
                    freq.erase(s[start]);
                }
                start++;
            }
            
            if(freq.size() == k){
                int len = end - start + 1;
                res = max(res,len);
            }
        }
        if(res == INT_MIN)
            res=-1;
        return res;
    }
};