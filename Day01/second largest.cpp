class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
       int largest=-1;
       int secondlargest=-1;
       int n=arr.size();
       for(int i=0; i<n;i++){
           if(arr[i]>largest){
               secondlargest=largest;
               largest=arr[i];
           }
           else if(arr[i]>secondlargest &&arr[i]!=largest){
               secondlargest=arr[i];
           }
       }
        return secondlargest;
    }
};
