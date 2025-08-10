/*
    This program prompts the user to input their age and determines if the user is an adult.
    - If the entered age is greater than or equal to 18, it prints "You are an adult".
    - If the entered age is less than 18, it prints "You are not an adult".
*/
#include<bits/stdc++.h>
using namespace std;
//Write a program that takes an input of age
// and print if you are adult or not
// >=18, yes
// < 18, no
int main(){
    int age;
    cin >> age;
    if (age >= 18)
    {
        cout << "You are an adult";
    }
    else{
        cout << "You are not an adult";
    }
    
    return 0;
}