class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
       int unique_index=0; // point to the last unique element
        for(int i=0; i<nums.size();i++){
            if(nums[i]!=nums[unique_index]){
                unique_index++;
            }
            nums[unique_index]=nums[i];
        }
       return unique_index+1; 
    }
};
