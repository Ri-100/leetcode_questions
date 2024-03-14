#include <bits/stdc++.h>
using namespace std; 
int subarraysDivByK(vector<int>& nums, int k);
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

int main(){

    vector<int> nums = {4,5,0,-2,-3,1};
    int k = 5;
    int ans = subarraysDivByK(nums,k);
    cout<<ans;


    return 0;
}