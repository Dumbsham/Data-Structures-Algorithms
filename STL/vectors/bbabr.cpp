#include<bits/stdc++.h>
using namespace std;
int main(){


    vector <int> v;
    // cout<< "capacity"<< v.capacity() << endl; // 0

 v.push_back(1);
     // capacity will become 1 and size also 1
    
    v.push_back(2);
    // capacity becomes 2 and size is also 2

    v.push_back(3);
    //  cout << "capacity: " <<v.capacity()<< endl; // capacity becomes 4 but size becomes 3
    // cout << "Size: " << v.size() << endl;
    
    v.push_back(4);
    //  cout << "capacity: " <<v.capacity()<< endl;
    //   cout << "Size: " << v.size() << endl; //capacity becomes 8 but size becomes 4

    cout << "Element at 2nd Index:" << v.at(2) << endl;

    cout << "Element at Front(first):" << v.front() << endl;
    cout << "Element at Back(last):" << v.back() << endl; 

    // pop back last ke element ko nikal dega

    //before pop back
     cout<< "Before Pop: ";
    for(int i = 0; i < v.size();i++){
        cout << v[i]<<" ";
    }
    cout << endl;
    v.pop_back();
    cout<<"After Pop: ";
    for(int i = 0 ; i < v.size();i++){
        cout<< v[i] << " ";
    }
    cout << endl;
    vector <int> a(5,1); // vector banado 5 elemnents ka aur sb elements ko 1 se initialize krdo   a = 1,1,1,1,1
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << " ";
    }
    //to copy a vector to another vector
    cout<< "vector last is: "<< endl;
    vector <int> last(a);
    for (int i = 0; i < last.size(); i++)
    {
        /* code */   cout << last.at(i) << " ";
    }
    

    return 0;
}