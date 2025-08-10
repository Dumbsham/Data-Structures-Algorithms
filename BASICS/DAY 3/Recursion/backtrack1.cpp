#include<bits/stdc++.h>
using namespace std;
void ulta(int i, int n){
    if(i > n) return;
    else {
        ulta(i+1, n);
        cout<< i << " ";
    }
   
}
int main(){
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    ulta(1,n);
    return 0;
}

