#include<bits/stdc++.h>
using namespace std;

void printpattern(int n){
for (int i = 0; i <= n; i++)
    {   
        for (int j = 0; j <= i; j++)
        {  
            if((i == j) || ((i-j)%2 == 0)){
                cout << "1";
            }
            else{
                cout << "0";
            }
        }
       cout << endl;
        
    }
}
int main(){
    int n;
    cout << "Enter the number of rows: "<<endl;
    cin >> n;
    cout << endl;
    printpattern(n);
    return 0;
}