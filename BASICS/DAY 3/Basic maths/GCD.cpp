#include <bits/stdc++.h>
using namespace std;
int minimum(int num1, int num2)
{
    if (num1 < num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int gcd1(int num1, int num2, int min)
{
   int gcd = 0;
    for(int i = 1; i < min;i++){
        if(num1%i==0 && num2%i==0){
            gcd = i;
        }
    }

    return gcd;
}

int gcd2(int num1, int num2,int min){
    int  gcd = 0;
    for(int i = min;i >=1;i--){
        if(num1%i==0 && num2%i==0){
            cout << i;
            break;
        }
    }
    return gcd;
}
int main()
{
    int num1, num2;
    cout << "Enter the two numbers: ";
    cin >> num1 >> num2;
    int min = minimum(num1, num2);

    // int ans1 = gcd1(num1, num2, min);
    // int ans2 = gcd2(num1,num2,min);
    // cout << ans1 << " is the brute force answer"<<endl;
    // cout << "the 2nd answer is: " << ans2;
    while(num1!=0 || num2!=0){
        if(num1 == min){
        num1 = num1 % num2;
          } 
          else{
            num2 = num2 % num1;
          }
         }
    return 0;
}