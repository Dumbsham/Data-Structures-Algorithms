#include<bits/stdc++.h>
using namespace std;

void erect(int n){
 //space
    for(int i = 1; i < n ; i++){

      for(int j = 0 ; j<n-i-1;j++){
        cout << " ";
      }

      for(int j = 0;j <2*i+1;j++){
        cout << "*";
      }

      
      for(int j = 0;j <n-i-1;j++){
        cout << " ";

    }
    cout << endl;
    }
    //star

    //space
}

void inverted(int n){
   //space
    for(int i = 0; i < n ; i++){

      for(int j = 0 ; j< i;j++){
        cout << " ";
      }

      for(int j = 0;j <2*n-(2*i+1);j++){
        cout << "*";
      }

      
      for(int j = 0;j < i;j++){
        cout << " ";

    }
    cout << endl;
    }
    //star

    //space
}

int main(){
    int n;
    cout << "Enter the number of rows";
    cin >> n;
    erect(n);
    inverted(n);
    return 0;
}