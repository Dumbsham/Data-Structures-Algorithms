#include<bits/stdc++.h>
using namespace std;
// this is the functional way 
int sum(int n){
    if(n == 0) {
        return 1;
    }
    return n*sum(n-1);

}
int main(){
    cout << "Enter the number: " << endl;
    int n;
    cin >> n;
    cout << endl;
   int result = sum(n);
   cout << result ;
    return 0;
}
