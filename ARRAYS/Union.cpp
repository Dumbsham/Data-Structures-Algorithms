#include<bits/stdc++.h>
using namespace std;
 vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
      set <int> st;
      for(int i = 0; i < nums1.size();i++){
        st.insert(nums1[i]);
      }  
        for(int i = 0; i < nums2.size();i++){
        st.insert(nums2[i]);
      }  
     vector <int> uni;
      for(auto it:st){
        uni.push_back(it);
      }

      return uni;

    }
    int main(){
        cout << "Enter the Array Size: ";
        int n;
        
        
        return 0;
    }