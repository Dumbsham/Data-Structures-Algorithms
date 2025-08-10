#include <bits/stdc++.h>
using namespace std;
 int x = 1;
// void printNumbers(int n)
// {
   
//     if(x == n){
//         cout << n;
//         return;
//     }
//     else{ 
        

//         cout << x <<",";
//            x++;
//         printNumbers(n);
//     }
// }

void func(int i, int n){
    if(i >n) return;
    else cout << i << ",";
    
    func(i+1,n);
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    // printNumbers(n);
    func(1, n);
    return 0;
}