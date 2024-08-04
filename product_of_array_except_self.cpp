class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prefix = 1;
        int postfix = 1;
        vector<int> output(n, 1);
        output[0] = 1;
        for(int i=1;i<n;i++){
            prefix = prefix * nums[i-1];
            output[i] = prefix;
        }
        for(int i=(n-2);i>=0;i--){
            postfix = postfix * nums[i+1];
            output[i] = output[i] * postfix; 
        }
        return output;
    }
};