class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        if ( nums[end] < nums[start]){
            // end--;
            
            if (nums[start] < nums[end]){
                end -- ;
            }
            start = end - 1 ;
            while(nums[start]<nums[end]){
                end--;
                start--;
            }
            return nums[end];
        }
        else{
            return nums[start];
        }
    }
};
