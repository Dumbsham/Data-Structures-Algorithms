#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "enter the string: ";
    // take input
    string str;
    cin >> str;
    // cin.ignore(); // Clears the newline left in buffer
    //hash array
    int hash[256] ={0};

    for (int i = 0; i < str.length(); i++)
    {
      hash[str[i]] +=1; 
    }
    


    int q;
    cout << "Enter the number of queries: "<<endl;
    cin >> q;
    while (q--)
    {
       char character;
       cin >> character; //this variable is re-created and destroyed in each iteration. So there's only one memory location at a time.
   
        cin.ignore(); // Ignore the newline after the character
        cout << character << " occours " << hash[character] << " times!" << endl;
    }

    
    
    return 0;
}