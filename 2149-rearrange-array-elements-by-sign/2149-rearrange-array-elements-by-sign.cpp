class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> result(nums.size(),0);
        int pos = 0;
        int neg = 1;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]>0){
                result[pos] = nums[i];
                pos = pos +2;
            }
            else{
                result[neg] = nums[i];
                neg = neg + 2;
            }

        }
        return result;
    }
};