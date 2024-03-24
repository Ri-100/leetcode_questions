class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {

        int sum = 0;
        int count = 0;
        unordered_map<int , int> umap;
        umap[0]++;
        for(auto x:nums){
            sum += x;
             if(umap[(sum%k + k)%k]>0){
                count += umap[(sum%k + k)%k];
             }
             umap[(sum%k + k)%k]++;

        }

    return count;    
    }
};