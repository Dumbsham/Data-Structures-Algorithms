#include<bits/stdc++.h>
using namespace std;

 vector<int> twoSum(vector<int>& nums, int target) {
        int i,sum,i1,i2 ;
       for( i = 0; i < nums.size();i++){
            int j = 1;
            while(nums[j] < target && j < nums.size()){
                if(nums[i] + nums[j] == target){
                    i1 = i;
                    i2 = j;
                }
            }
       }
       vector<int> ans = {i1,i2};
       return ans;
}
int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target); // assuming twoSum is already implemented

    cout << "Indices: " << result[0] << " " << result[1] << endl;

    return 0;
}

// tried but failed badly