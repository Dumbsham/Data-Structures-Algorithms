#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    getline(cin,s);
    getline(cin,t);
      int n = s.length();
    string rev(n, ' ');
  
    for(int i = 0 ; i < n;i++){
        rev[i] = s[n-i-1];
    }
    
    if (rev == t) {
        cout <<"YES";
    } else {
        cout<<"NO";
    }
    
    
    return 0;
}