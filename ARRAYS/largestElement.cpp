#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << "Enter the array:"<<endl;
    vector <int> nums;
    int x;
    while(cin >> x){
        nums.push_back(x);
    }
   // find largest element
    int largest = nums[0];
    for(int i = 1;i < nums.size();i++){
        if(nums[i] > largest){
            largest = nums[i];
        }
    }
    cout << largest;
    return 0;
}