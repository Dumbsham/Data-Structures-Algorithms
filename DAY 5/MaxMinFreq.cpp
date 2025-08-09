#include <bits/stdc++.h>
using namespace std;
void MaxMin(vector<int> &arr, int n)
{

    vector<int> visited(n, false);
 int maxFreq = 0, minFreq = n;
        int maxElement = 0, minElement = 0;
    for (int i = 0; i < n; i++)
    {
       
        if (visited[i] == true)
        {
            continue;
        }
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                visited[j] = true;
                count++;
            }
        }
        if (count > maxFreq)
        {
            maxElement = arr[i];
            maxFreq = count;
        }

        if (count < minFreq)
        {
            minElement = arr[i];
            minFreq = count;
        }
    }
    cout << "The highest frequency element is: " << maxElement << "\n";
    cout << "The lowest frequency element is: " << minElement << "\n";
}
int main()
{
    cout << "Enter the array size: " << endl;
   
    int n;
    cin >> n;
     vector<int> arr(n);
    cout << "Enter the array Elements: ";
 for (int i = 0; i < n; i++) {
    cin >> arr[i];
}

    MaxMin(arr, n);

    return 0;
}