#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> nums, int n)
{
    int largest = nums[0];
    int slargest = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] > largest)
        {
            slargest = largest;
            largest = nums[i];
        }
        else if (nums[i] < largest && nums[i] > slargest)
        {
            slargest = nums[i];
        }
    }
    return slargest;
}

int secondSmallest(vector<int> nums, int n)
{
    int smallest = nums[0];
    int ssmallest = INT_MAX;

    for (int i = 1; i < n; i++)
    {
        if (nums[i] < smallest)
        {
            ssmallest = smallest;
            smallest = nums[i];
        }
        else if (nums[i] > smallest && nums[i] < ssmallest)
        {
            ssmallest = nums[i];
        }
    }
    return ssmallest;
}

void second(vector<int> &nums, int n)
{
    int slargest = secondLargest(nums, n);
    int ssmallest = secondSmallest(nums, n);
    cout << slargest << " is the second largest element in the array!" << endl;
    cout << ssmallest << " is the second smallest element in the array!" << endl;
}

int main()
{
    cout << "Enter the Array: ";
    vector<int> nums;
    int x;
    while (cin >> x)
    {
        nums.push_back(x);
    }

    second(nums, nums.size());
    return 0;
}