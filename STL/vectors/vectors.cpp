#include<bits/stdc++.h>
using namespace std;

void printVector(vector <int> &v){
    for(auto x : v){
        cout << x << " ";
    }
    cout << endl;
}

int main(){


//  vector <int> v1 = {1,2,3,4};
    
//  vector <int> v2(5,9); //creates a vector of size 5 where each element initialized to 9
    // printVector(v1);
    // printVector(v2);  

// ==========================================================================================================


vector <float> v1 = {1.2 , 2.3 , 4.6};

//v.insert to insert at the beginning of the vector
// v. push_back to insert at the end of the vector 

//v.begin() gives the start of the vector

v1.push_back(3.5);

v1.insert(v1.begin()+1 , 9.3);

// we should get 1.2 , 2.3 , 4.6 ,3.5

for(int i = 0; i < v1.size();i++){
    cout << v1[i] << "|";
}
    return 0;
}