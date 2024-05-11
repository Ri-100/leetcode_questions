class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        for(int i = 0 ; i<nums.size() ; i++){
            int b = nums[i];
            int a = target - b;
            if(mpp.find(a) != mpp.end()){
                return {mpp[a],i};
            }
            mpp[b] = i;
        }
    return {0};
    }
    
};