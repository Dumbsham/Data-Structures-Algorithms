#include<bits/stdc++.h>
using namespace std;

void PrintPattern(int n){
    for(int i=n;i > 0;i--){
        for(int j=1;j <= i;j++){
            cout << j;
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