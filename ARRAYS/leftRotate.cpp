#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cout << "enter the size of the array: ";
cin >> n;
vector<int> arr(n);
for(int i = 0; i < n; i++) {
    cin >> arr[i];
}
cout<<"enter the k: ";
int k;
cin >> k;

    // [1,2,3,4,5,6,7],k = 4
    

    vector <int> temp(k);
   
    // 1. store first k values
    for(int i = 0; i < k ;i++){
        temp[i] = arr[i];
    }
    // 2. shift the remaining values to the left by k places
    for(int i = k;i < arr.size();i++){
        arr[i-k] = arr[i];
    }

    // 3. insert the stored k values into the end empty spots
    int j = 0;
    for(int i = arr.size() - k ; i < arr.size();i++){
        arr[i] = temp[j];
        j++;
    }

    for(int i = 0;i < arr.size();i++){
        cout << arr[i]<<",";
    }
    
    


    return 0;
}