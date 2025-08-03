#include<bits/stdc++.h>
using namespace std;

void sum(int i, int currentSum){
    if(i<1){
        cout << currentSum;
        return;
    }
    else{
        sum(i-1, currentSum + i);
    }
}

int main(){
    int n;
    cout << "Enter the number: "<<endl;
    cin >> n;
    sum(n,0);
    return 0;
}

