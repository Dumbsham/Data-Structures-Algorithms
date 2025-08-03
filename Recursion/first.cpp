#include<bits/stdc++.h>
using namespace std;
 int counter = 0;
void printCount() {
    
    if(counter == 4){
        return;
    }
    else{
        cout << counter << endl;
        counter++;
        printCount();
    }
}

int main(){
    printCount();
    return 0;
}