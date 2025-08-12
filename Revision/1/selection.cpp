#include <bits/stdc++.h>
using namespace std;
vector<int> SelectionSort(vector<int> nums, int n)
{
    for(int i = 0;i <=n-2;i++){
        int min = i;
        for(int j = i+1; j <= n-1;j++){
            if(nums[j] < nums[min]) 
            min = j;
        }
        swap(nums[i], nums[min]);
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
    vector<int> sortedNums = SelectionSort(nums, n);
    for (int i = 0; i < n; i++)
    {
        cout << sortedNums[i] << ",";
    }
    
    return 0;
}