#include <bits/stdc++.h>
using namespace std; 
int subarraysDivByK(vector<int>& nums, int k);
int subarraysDivByK(vector<int>& nums, int k) {
        int sum = 0;
        int count = 0;
        unordered_map<int , int> umap;
        umap[0]++;//initially storing 0->1
        for(auto x:nums){
            sum += x;
             if(umap[(sum%k + k)%k]>0){
                count += umap[(sum%k + k)%k];//if value is found in map, we will increment the count by its map value
             }
             umap[(sum%k + k)%k]++;//else we will add that value in the map

        }

    return count;    
    }

int main(){
    //taking one of the test case as a input
    vector<int> nums = {4,5,0,-2,-3,1};
    int k = 5;
    int ans = subarraysDivByK(nums,k);
    cout<<ans;


    return 0;
}

//o/p - > 7 for this particular testcase
