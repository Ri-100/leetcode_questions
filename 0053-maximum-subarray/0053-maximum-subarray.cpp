class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int max=INT_MIN;
        for(auto i:nums){
            sum += i;
            if(max<sum){
                max = sum;
            }
            
            if(sum<0){
                sum=0;
            }
            
            
        }
        return max;
    }
};