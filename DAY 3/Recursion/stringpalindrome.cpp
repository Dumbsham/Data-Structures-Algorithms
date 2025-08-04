#include<bits/stdc++.h>
using namespace std;

bool palindrome(int i, string str){
    if(i >=str.length()/2){
        return true;}
        if(str[i] != str[str.length()-i-1]){
            return false;
        }
   
    return palindrome(i+1,str);
    
}

int main(){
   string str;
   cout << "Enter the string" << endl;
   getline(cin, str);
   int size = str.length();
   bool pal = palindrome(0,str);
    if(pal){
        cout << "The string is Palindrome";
    }
    else{
        cout << "The string is not Palindrome";
    }

   
    return 0;
}

