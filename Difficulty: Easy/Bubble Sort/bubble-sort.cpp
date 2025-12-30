class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        for(int i=0;i<n;i++){
            for(int j=1;j<n;j++)
                if(arr[j-1] > arr[j]){
                    swap(arr[j],arr[j-1]);
                }
            }
        }
};


/*

41 9 9 48 11 2 

Round-1 

    i  j 
    41 9 9 48 11 2 
       i j 
    9 41 9 48 11 2
         i  j     
    9 9 41 48 11 2
            i  j
    9 9 41 48 11 2
               i j
    9 9 41 11 48 2
    
    9 9 41 11 2 48
    
    
    
*/