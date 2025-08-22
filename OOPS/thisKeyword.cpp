#include<bits/stdc++.h>
using namespace std;

class Cricketer{
  public:  
    string name;
    int runs;

    Cricketer(string name,int runs){
        this->name = name; //code ko ghanta pata hai ki kisko kya dena hai
        this->runs = runs;
    }

    void print(){
    cout << name << " "<< runs << endl;
}

};



int main(){
    Cricketer c1("Virat Kohli",25000);
    Cricketer c2("Rohit Sharma",18000);

    c1.print();
    c2.print();

}