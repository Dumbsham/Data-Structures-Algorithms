#include<bits/stdc++.h>
using namespace std;
int name = 0;
void printname(string str){
    if(name == 4){
        return;
    }
    else{
         name++;
         cout << str << endl;
        printname(str);
       
    }
}
int main(){
    cout << "Enter your name" << endl;
    string str;
    getline(cin , str);
    printname(str);
    return 0;
}