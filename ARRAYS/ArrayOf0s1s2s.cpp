#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2,0,2,1,1,0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int low,mid,high;
    high = n-1;
    low = mid = 0;
    for(int i = 0;i < n;i++){
        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            low++,mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
           swap(arr[mid],arr[high]);
           high--;
        }
    }

    for(int i = 0 ; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}