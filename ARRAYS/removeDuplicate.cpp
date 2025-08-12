#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[7] = { 1, 1 , 2 , 2, 2 , 3 , 3};
    set <int> st;
    for(int i = 0; i < 7;i++){
        st.insert(arr[i]);
    }
    int index = 0 ;
    for(auto it:st){
        arr[index] = it;
        index++;
    }
    for(auto it: st){
        cout << it<<", ";
        }
    return 0;
}