#include<bits/stdc++.h>
using namespace std;
int main(){
   cout << "Enter the size of the array: "<<endl;
   int n;
   cin >> n;
   int arr[n];
   cout << "Enter the elements of the array"<<endl;
   for (int i = 0; i < n; i++)
   {
    cin >> arr[i];
   }
   int hash[13] = {0};

   for (int i = 0; i < n; i++)
   {
        hash[arr[i]]+=1;
   }
   
   

   int q; // number of queries one want to find out(kitne numebro ke baare mein usse dhundna hai ki kitni baare woh number aare aaray mein)
   cout << "enter the no. of queries: ";
   cin >> q;
   while (q--)
   {
    int number;
    cout << "Enter the query: ";
    cin >> number;// actual query(actual number jiski frequency dhundni hai)
    cout << "hash[" << number << "] = " << hash[number] << " is the number of times it occurs" << endl;
   }
   
   
   
   
    return 0;
}

