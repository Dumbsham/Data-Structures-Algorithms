#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    int last = fibonacci(n - 1);
    int slast = fibonacci(n - 2);
    return last + slast;
}

int main()
{
    cout << "Enter the number: " << endl;
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}