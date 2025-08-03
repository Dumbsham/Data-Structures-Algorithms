#include<bits/stdc++.h>
using namespace std;

int main(){
    deque <int> d;

    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_front(1);

    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i]<<" ";
    }
    cout <<endl;
    cout <<"front: " << d.front()<< endl;
    cout << "Back: " << d.back() << endl;

    cout <<"0 means the deque is not empty, 1 means it is "<< endl;
    if(d.empty()){
        cout << "The deque is empty"<<endl;
    }
    else cout << "The deque is not empty";
    return 0;
}