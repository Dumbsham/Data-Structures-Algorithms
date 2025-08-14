#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    int ld,rev = 0;
     while(x!=0){
            ld = x%10;
            rev = rev*10 + ld;
            x = x/10;
        }
        cout << rev;
    return 0;
}
/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for(int j = 1;j<nums.size();j++){
            if(nums[j] != nums[i]){
                nums[i+1] = nums[j];
                i++;
            }
        }
        return i+1;
    }
};*/