#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int,int> mpp;
       
        for(int i = 0; i < nums.size(); i++){
            int a = nums[i];
            int more = target - nums[i];
            if(mpp.find(more) != mpp.end()){
                return {mpp[more], i};
            }
            mpp[a] = i;
        }
        return {-1, 1};
    }
};

int main() {
    Solution sol;

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = sol.twoSum(nums, target);

    if(ans[0] != -1) {
        cout << "Indices: " << ans[0] << ", " << ans[1] << endl;
        cout << "Numbers: " << nums[ans[0]] << ", " << nums[ans[1]] << endl;
    } else {
        cout << "No solution found!" << endl;
    }

    return 0;
}