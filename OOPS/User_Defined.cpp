#include <bits/stdc++.h>
using namespace std;

class Car
{
public:
    string name;
    int price;
    int seats;
    string type;
};
void print(Car C) {
    cout << C.name <<" "<< C.price<<" "<<C.seats<<" "<<C.type<< endl;
}

void change(Car& C) {
  C.name = "Audi A8";
}
int main()
{
  Car c1;

    c1.name = "Honda City";
    c1.price = 15;
    c1.seats = 5;
    c1.type = "Sedan";

    print(c1);
    change(c1); // Pass by value
    print(c1);

  // Car c2;
  //   c2.name = "Maruti Swift";
  //   c2.price = 7;
  //   c2.seats = 5;
  //   c2.type = "Hatchback";
  //
  //   Car c3;
  //   c3.name = "Toyota Fortuner";
  //   c3.price = 36;
  //   c3.seats = 8;
  //   c3.type = "SUV";

    // print(c1);
    // print(c2);
    // print(c3);

}