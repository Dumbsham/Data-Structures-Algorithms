#include<bits/stdc++.h>
using namespace std;

void PrintPattern(int n){
    for(int i=n;i > 0;i--){
        for(int j=i;j > 0;j--){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    PrintPattern(n);
    return 0;
}