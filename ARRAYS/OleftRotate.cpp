#include<bits/stdc++.h>
using namespace std;
    void r_everse(int arr[],int start,int end){
        while(start<=end){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

void Rotation_Left(int arr[], int n,int k){
    r_everse(arr,0,n-k-1);
    r_everse(arr, n-k,n-1);
    r_everse(arr, 0 , n-1);

}
int main(){
    cout << "Enter the size of the ARRAY: ";
    int n;
    cin >> n;
    cout << "Enter the elements of the array: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout<< "Enter k: ";
    cin >> k;
    Rotation_Left(arr,n,k);

    cout << "[";
    for(int i =0 ; i < n;i++){
        cout << arr[i]<<", ";
    }
    cout << "]";
    
    
    return 0;
}