#include <bits/stdc++.h>
using namespace std;

    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        int j = 1;
        int i = 0;
        int count = 0;
        while(j<size){
            if(nums[j]==nums[i]){
                j++;
            }
            else{
            nums[i+1] = nums[j];
            j++;
            i++;
            count++;
            }
        }
        return count+1;
    }

    int main(){

        vector<int> nums = {1,1,2};

        int ans = removeDuplicates(nums);
        cout<<ans;



        return 0;
    }