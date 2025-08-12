#include <bits/stdc++.h>
using namespace std;
vector<int> BubbleSort(vector<int> nums, int n)
{
    for(int i = 0;i < n;i++){
        for(int j = 0;j<n;j++){
            if(nums[j] >nums[j+1]) swap(nums[j],nums[j+1]);
        }
    }

    return nums;
}
int main()
{
    vector<int> nums;
    int x;
    while (cin >> x)
    {
        nums.push_back(x);
    }
    int n = nums.size();
    vector<int> Sorted = BubbleSort(nums,n);
    for (int i = 0; i < n; i++)
    {
        cout << Sorted[i] << ",";
    }
    
    return 0;
}