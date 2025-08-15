#include<bits/stdc++.h>
using namespace std;
 int linearSearch(vector<int>& nums, int target) {
        //your code goes here
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                return i;
            }
        }
        return -1;
    }

    int main(){
        vector<int> arr = {1,1,2,4,6,4,3,1};
        int index = linearSearch(arr,3);
        cout << index;
        return 0;
    }