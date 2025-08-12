#include <bits/stdc++.h>
using namespace std;
vector<int> InsertionSort(vector<int> nums, int n)
{
    int i, j, v;
    for (int i = 1; i <= n - 1; i++)
    {
        v = nums[i];
        j = i;
        while (nums[j - 1] > v && j >= 1)
        {
            nums[j] = nums[j - 1];
            j--;
        }
        nums[j] = v;
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
    vector<int> sortedNums = InsertionSort(nums, n);
    for (int i = 0; i < n; i++)
    {
        cout << sortedNums[i] << ",";
    }
    
    return 0;
}