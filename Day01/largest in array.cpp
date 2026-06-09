class Solution {
  public:
    int largest(vector<int> &arr) {
        int max_num=arr[0];
        int n=arr.size();
        for(int i=1; i<n; i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
      return max; 
      
      
     // this is an alernate method by using sort function
    // sort(arr.begin(),arr.end());
    // return arr[n-1];
    }
};
