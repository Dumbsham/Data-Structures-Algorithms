#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[] , int n){
    for (int i = 0; i < n - 2; i++)
    {
        int min = i;
        for(int j = i; i <=n-1;j++){
            if(arr[j] < arr[min]){
                swap(arr[i],min);
            }

        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
}
int main(){
    cout << "Enter the Array Size: ";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    selection_sort(arr,n);
   
    return 0;
}