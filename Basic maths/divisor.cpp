#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter then number: ";
    cin >> n;
    vector<int> v;
    cout << "[";
    for (int i = 1; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);

            if (i != n / i)
            {
                v.push_back(n / i);
            }
        }
    }
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ", ";
    }

    cout << "]";
}