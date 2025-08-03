#include<bits/stdc++.h>
using namespace std;
void swapElements(int *start , int *end){
    int temp = *start;
    *start = *end;
    *end = temp;
}
void reverse(int arr[], int start,int end){
    if( start >= end){
        return;
    }
    else{
        swapElements(&arr[start],&arr[end]);

        reverse( arr, start+1,end-1);
    }
}

int main(){
    cout << "Enter the size of the array: "<< endl;
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Before reversing: "<<endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << ", ";
    }
    cout <<endl;
    
    reverse(arr, 0,n-1);

    cout << "After reversing: "<<endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << ", ";
    }
    return 0;
}