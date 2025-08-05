#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the vector(press Enter to stop): ";
    int  x;

    vector<int> v;

   while (cin >> x)
   {
     v.push_back(x);
   }
     // Clear the error state (if user pressed Ctrl+Z/Ctrl+D)
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the buffe

    map<int,int> mpp;
    for (int num : v)
    {
        mpp[num] +=1;
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;
    while (q--)
    {
        int num;
        cout << "Enter the query: ";
        cin >> num;
        cout << "The number " << num << " appears " << mpp[num] << " times !"<<endl;
    }

    
    
    return 0;
}