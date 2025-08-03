#include<bits/stdc++.h>
using namespace std;
void func(int i, int n){
    if(i <n) return;
    else cout << i << ",";
    
    func(i-1,n);
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    // printNumbers(n);
    func(n, 1);
    return 0;
}